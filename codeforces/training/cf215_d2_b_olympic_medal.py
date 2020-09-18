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
    max_p = 0
    for i in range(m):
        p1 = y[i + 1]
        for j in range(k):
            p2 = z[j + 1]
            max_p = max(max_p, p1 / p2)
    for r in range(n):
        r1 = x[r + 1]
        r2 = math.sqrt(max_p * r1 ** 2 / (a / b + max_p))
        max_r2 = max(r2, max_r2)
    print(f'{max_r2:.12f}')
