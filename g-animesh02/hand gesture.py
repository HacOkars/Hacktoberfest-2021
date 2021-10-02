#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'maximumPower' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING s as parameter.
#
def longest0(s):
    c = 0
    m = 0
    for i in s:
        if i == '0':
            c += 1
        else:
            if c > m:
                m = c
            c = 0
    return m

def maximumPower(st):
    q = lambda s: -1 if s[0] == '0' else 0
    if len(set(st)) == 1:
        return q(st)
    v = lambda s: (s+s) if s[0] == s[-1] else s
    st = v(st)
    return longest0(st)



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input().strip()

    result = maximumPower(s)

    fptr.write(str(result) + '\n')

    fptr.close()
