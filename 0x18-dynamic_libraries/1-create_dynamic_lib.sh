#!/bin/bash

gcc *.c -c -fPIC
gcc *.c -shared -o liball.so
