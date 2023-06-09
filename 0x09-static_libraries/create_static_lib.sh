#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create a static library from the object files
ar rcs liball.a *.o

# Clean up by deleting the object files
rm *.o

echo "Static library liball.a created successfully!"
