#!/bin/python

import sys

dict = {}

max = 5
if len(sys.argv) >= 2:
    max = int(sys.argv[1])

for a in range(2, max + 1):
    for b in range(2, max + 1):
        dict[a**b] = ""

print(len(dict))
