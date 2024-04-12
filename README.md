# Bin2ASCII-STL-Converter
A binary to ASCII STL converter written in C++ based around the Eigen3 Library.

# Install
In order to install the converter, install the Eigen3 dependency with: 

```
sudo apt install libeiegen3-dev
```

Afterwards, run the following scripts:

```
git clone https://github.com/Jdiaz031/Bin2ASCII-STL-Converter.git
cd Bin2ASCII-STL-Converter
mkdir build
cd build
cmake ../
sudo make install
```

#Using the Conerter
In order to run the converter, use the following format in terminal.

```
Bin2ASCII-STL /path/to/binary/STL/file /path/to/save/ASCII/file
```
