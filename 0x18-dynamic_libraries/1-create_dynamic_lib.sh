#!/bin/bash
gcc -fPIC -c ./dependencies/*.c
gcc -shared -o liball.so ./dependencies/*.o
