#
# Author: eloyhz
# Date: Sep/18/2020
#
# Codeforces (CF215-D2-B) - Olympic Medal
# https://codeforces.com/contest/215/problem/B
#

import math

if __name__ == '__main__':
    x = [int(x) for x in input().split()]
    y = [int(x) for x in input().split()]
    z = [int(x) for x in input().split()]
    a, b = [int(x) for x in input().split()]
    n = x[0]
    m = y[0]
    k = z[0]
    max_r2 = 0
    for r in range(n):
        r1 = x[r + 1]
        for s in range(m):
            p1 = y[s + 1]
            for t in range(k):
                p2 = z[t + 1]
                r2 = math.sqrt(p1 * r1 ** 2 / (a / b * p2 + p1))
                max_r2 = max(r2, max_r2)
    print(f'{max_r2:.12f}')
