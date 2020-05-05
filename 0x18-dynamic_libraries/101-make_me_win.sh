#!/bin/bash
wget -P /tmp https://github.com/ElkinAMG/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/rand.so
export LD_PRELOAD=/tmp/rand.so
