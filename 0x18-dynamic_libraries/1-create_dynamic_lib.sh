#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c -fpic *.c
gcc *.o -shared -o liball.so
