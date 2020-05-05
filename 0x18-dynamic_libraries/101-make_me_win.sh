#!/bin/bash
wget https://github.com/ElkinAMG/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/rand.so?raw=true
export LD_PRELOAD=./rand.so
