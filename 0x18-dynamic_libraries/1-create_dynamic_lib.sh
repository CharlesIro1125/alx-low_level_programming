#!/bin/bash
cd ./dependencies/
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
cp liball.so ../
cd ..
