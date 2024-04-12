# Bin2ASCII-STL-Converter
A binary to ASCII converter written in C++ based around the Eigen Library.

# Install
In order to install the converter, install the Eigen3 dependency with: 

```
sudo apt install libeiegen3-dev
```

Afterwards, run the following scripts after downloading the repository:

```
mkdir build
cd build
cmake ../Bin2ASCII-STL-Converter
sudo make install
```

#Using the Conerter
In order to run the converter, use the following format in terminal.

```
Bin2ASCII-STL /path/to/binary/STL/file /path/to/save/ASCII/file
```
