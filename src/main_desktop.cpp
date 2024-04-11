#include "BinSTL.h"
#include "ASCII_Convert.h"
#include <iostream>

int main(int argc, char** argv) {
    BinarySTL BinModel;
    BinModel.OpenBinaryFile(argv[1]);
    ASCII Writing;
    Writing.Bin2ASCII(argv[2],BinModel);
    return 0;
}
