#include "BinSTL.h"

void BinarySTL::OpenBinaryFile(std::string file){
    int position;
    position=80;
    filename = file;
    std::ifstream STL_Model(filename,std::ios::binary);
    STL_Model.seekg(position);
    STL_Model.read(reinterpret_cast<char*>(&Faces),sizeof(uint32_t));
    Normal.resize(Faces,3);
    Vertex1.resize(Faces,3);
    Vertex2.resize(Faces,3);
    Vertex3.resize(Faces,3);
    position+=4;
    STL_Model.seekg(position);
    for(int i=1;i<=Faces;i++){
        float Norm[3];
        STL_Model.read(reinterpret_cast<char*>(&Norm),3*sizeof(float));
        for(int j=0;j<3;++j){
            Normal(i-1,j)=Norm[j];
        }

        position+=12;
        STL_Model.seekg(position);
        float Vert1[3];
        STL_Model.read(reinterpret_cast<char*>(&Vert1),3*sizeof(float));
        for(int j=0;j<3;++j){
            Vertex1(i-1,j)=Vert1[j];
        }

        position+=12;
        STL_Model.seekg(position);
        float Vert2[3];
        STL_Model.read(reinterpret_cast<char*>(&Vert2),3*sizeof(float));
        for(int j=0;j<3;++j){
            Vertex2(i-1,j)=Vert2[j];
        }

        position+=12;
        STL_Model.seekg(position);
        float Vert3[3];
        STL_Model.read(reinterpret_cast<char*>(&Vert3),3*sizeof(float));
        for(int j=0;j<3;++j){
            Vertex3(i-1,j)=Vert3[j];
        }

        position+=14;
        STL_Model.seekg(position);
    }
    STL_Model.close();
}
