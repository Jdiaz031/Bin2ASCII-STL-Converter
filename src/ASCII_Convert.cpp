#include "ASCII_Convert.h"
#include "BinSTL.h"

void ASCII::Bin2ASCII(std::string filename, const BinarySTL& obj){
    STL_FILENAME=filename;
    std::ofstream STL_FILE(STL_FILENAME);
    STL_FILE<<"solid Hoozus Program\n";
    for(int i=0;i<obj.Vertex1.rows();i++){
        STL_FILE<<"  facet normal ";
        STL_FILE<<obj.Normal(i,0)<<" "<<obj.Normal(i,1)<<" "<<obj.Normal(i,2);
        STL_FILE<<"\n";
        STL_FILE<<"    outer loop\n";
        STL_FILE<<"      vertex ";
        STL_FILE<<obj.Vertex1(i,0)<<" "<<obj.Vertex1(i,1)<<" "<<obj.Vertex1(i,2);
        STL_FILE<<"\n";
        STL_FILE<<"      vertex ";
        STL_FILE<<obj.Vertex2(i,0)<<" "<<obj.Vertex2(i,1)<<" "<<obj.Vertex2(i,2);
        STL_FILE<<"\n";
        STL_FILE<<"      vertex ";
        STL_FILE<<obj.Vertex3(i,0)<<" "<<obj.Vertex3(i,1)<<" "<<obj.Vertex3(i,2);
        STL_FILE<<"\n";
        STL_FILE<<"    endloop\n";
        STL_FILE<<"  endfacet\n";
    }
    STL_FILE<<"endsolid Hoozus Program";
    STL_FILE.close();
}

