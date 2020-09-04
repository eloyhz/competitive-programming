# Codeforces - Minimum Product
# https://codeforces.com/contest/1409/problem/B
#
# Author: eloyhz
# Date: Sep/04/2020
#

from sys import maxsize


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        a, b, x, y, n = [int(x) for x in input().split()]
        ax = a - x
        by = b - y
        c1 = c2 = c3 = c4 = maxsize
        if ax >= n and by >= n:
            m1 = (a - n) * b
            m2 = (b - n) * a
            print(min(m1, m2))
        elif ax >= n and by < n:
            m1 = (a - n) * b
            nby = n - by
            m2 = (b - nby) * (a - by)
            print(min(m1, m2))
        elif ax < n and by >= n:
            nax = n - ax
            m1 = (a - nax) * (b - ax)
            m2 = (b - n) * a
            print(min(m1, m2))
        elif ax + by <= n:
                c4 = (a - ax) * (b - by)
                print(c4)
        else:
            nax = n - ax
            m1 = (a - nax) * (b - ax)
            nby = n - by
            m2 = (b - nby) * (a - by)
            print(min(m1, m2))


