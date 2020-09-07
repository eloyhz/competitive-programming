# Codeforces - Wasted Time
# https://codeforces.com/contest/127/problem/A
#
# Author: eloyhz
# Date: Sep/07/2020
#

from math import sqrt

def d(x1, y1, x2, y2):
    return sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)


if __name__ == '__main__':
    n, k = [int(x) for x in input().split()]
    a = []
    for _ in range(n):
        a.append([int(x) for x in input().split()])
    s = 0
    for i in range(n - 1):
        s += d(a[i][0], a[i][1], a[i + 1][0], a[i + 1][1])
    print(f'{s * k / 50:.9f}')


