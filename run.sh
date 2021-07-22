#!/bin/bash

rm -rf build/
mkdir build/
cd build/
echo "do:cmake"
cmake ../
echo "do:make"
make 

echo "done"

