#!/bin/python

import csv
import sys


with open("./data/pe_0022.csv") as csvfile:
    dict = {}
    reader = csv.reader(csvfile)
    
    for name in list(reader)[0]:
        abc_val = 0
        for c in name:
            abc_val = abc_val + (ord(c) - ord('A') + 1)
        dict[name] = abc_val
    
    sum = 0
    x = 1
    for k in sorted(dict.keys()):
        if k == "":
            print("{} : {} * {}".format(k, dict[k], x))
        sum = sum + (x * dict[k])
        x = x + 1

    print(sum)
