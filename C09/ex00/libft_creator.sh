#!/bin/sh

gcc -c -Wall -Wextra -Werror *c
ar rc libstr.a *o
