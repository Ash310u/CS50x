# Run these commands to install the cs50 library

# gcc -c cs50Header/cs50.c -o cs50.o
# ar rcs cs50Header/libcs50.a cs50.o
# sudo cp cs50Header/cs50.h /usr/local/include/
# sudo cp cs50Header/libcs50.a /usr/local/lib/libcs50.a


#!/bin/bash
gcc -I/usr/local/include -L/usr/local/lib "$1.c" -lcs50 -o "$1"

# run this command to make the script executable
# chmod +x build.sh

# run the script
# ./build.sh <filename>