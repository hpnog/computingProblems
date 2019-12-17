#!/bin/bash
#
# Script to compile and run test program deleting at the end

cd src

make
./build/sePrep
make clean

cd ..