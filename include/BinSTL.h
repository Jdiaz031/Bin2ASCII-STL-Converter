#ifndef BIN_STL_H
#define BIN_STL_H

#include <eigen3/Eigen/Dense>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

class BinarySTL{
    std::string filename;
    int Faces;
    public:
        void OpenBinaryFile(std::string);
        void DispNorm();
        void DispVertex1();
        void DispVertex2();
        void DispVertex3();
        Eigen::ArrayXXf Vertex1;
        Eigen::ArrayXXf Vertex2;
        Eigen::ArrayXXf Vertex3;
        Eigen::ArrayXXf Normal;
};

#endif // BIN_STL_H
