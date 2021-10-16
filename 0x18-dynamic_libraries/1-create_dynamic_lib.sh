#!/bin/bash

gcc *.c -c -fpic
gcc *.c -shared -o liball.so
