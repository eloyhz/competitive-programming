# Codeforces - Balanced Rating Changes
# https://codeforces.com/contest/1237/problem/A
#
# Author: eloyhz
# Date: Sep/07/2020
#

from math import ceil
from math import floor


if __name__ == '__main__':
    n = int(input())
    a = [0] * n
    b = [0] * n
    odds = []
    for i in range(n):
        a[i] = int(input())
        if a[i] % 2:
            odds.append(i)
        else:
            b[i] = a[i] // 2
    for i in range(0, len(odds), 2):
        j = i + 1
        ai = a[odds[i]]
        aj = a[odds[j]]
        s = (ai + aj) // 2
        if ceil(ai / 2) + ceil(aj / 2) == s:
            b[odds[i]] = ceil(ai / 2)
            b[odds[j]] = ceil(aj / 2)
        elif floor(ai / 2) + floor(aj / 2) == s:
            b[odds[i]] = floor(ai / 2)
            b[odds[j]] = floor(aj / 2)
        elif ceil(ai / 2) + floor(aj / 2) == s:
            b[odds[i]] = ceil(ai / 2)
            b[odds[j]] = floor(aj / 2)
        elif floor(ai / 2) + ceil(aj / 2) == s:
            b[odds[i]] = floor(ai / 2)
            b[odds[j]] = ceil(aj / 2)
    for x in b:
        print(x)
