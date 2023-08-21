#!/bin/bash
# Gets all C files in current directory
c_file=$(ls *.c)

# Create object file by looping through each file
for c_file in $c_file; do
	gcc -fpic c_file -c
done

# Create dynamic library
gcc -shared -o liball.so *.o
