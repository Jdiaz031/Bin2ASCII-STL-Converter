#ifndef ASCII_CONVERT_H
#define ASCII_CONVERT_H

#include "BinSTL.h"
#include <eigen3/Eigen/Dense>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

class ASCII{
    std::string STL_FILENAME;
    std::ofstream STL_FILE;
    private:

    public:
        void Bin2ASCII(std::string,const BinarySTL&);

};
#endif //ASCII_CONVERT_H
