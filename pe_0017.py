#!/bin/python

#work smarter not harder


from num2words import num2words
import sys

max = 5
if(len(sys.argv) >= 2):
    max = int(sys.argv[1])

sum = 0
for i in range(1,max + 1):
    sum = sum + len(num2words(i, lang="en_GB").replace("-","").replace(" ","").replace(",",""))

print(sum)

