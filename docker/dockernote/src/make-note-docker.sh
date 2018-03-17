#!/bin/bash

git clone https://github.com/FndNur1Labs/CryptonoteEvo.git
cd CryptonoteEvo
git clone https://github.com/LMDB/lmdb.git
mkdir -p build
cd build
cmake ..
time make -j4

cd ../..
git clone https://github.com/bcndev/bytecoin-gui.git
cd bytecoin-gui
mkdir -p build
cd build
cmake ..
time make -j4
cp -v ../../CryptonoteEvo/bin/* /save/
cp -v ../bin/* /save/

