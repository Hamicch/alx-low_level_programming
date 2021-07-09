#!/bin/bash
gcc -Wall -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *.c
ranlib liball.a

