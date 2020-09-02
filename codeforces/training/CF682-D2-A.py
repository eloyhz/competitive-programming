# Codeforces - Alyona and Numbers
# https://codeforces.com/contest/682/problem/A
#
# Author: eloyhz
# Date: Sep/02/2020
#

from math import ceil

if __name__ == '__main__':
    n, m = [int(x) for x in input().split()]
    t = (n + m) // 5
    count = 0
    for x in range(1, n + 1):
        count += t
        y = t * 5 - x
        if y > m:
            r = ceil((y - m) / 5)
            count -= r
        y = 5 - x
        if y <= 0:
            if y % 5:
                r = ceil(abs(y) / 5)
            else:
                r = abs(y) // 5 + 1
            count -= r
    print(count) 
