#
# Author: eloyhz
# Date: Sep/14/2020
#
# UVa 00412 - Pi
# https://onlinejudge.org/external/4/412.pdf
#

from math import sqrt

def gcd(a, b):
    return gcd(b, a % b) if b else a


def solve(a):
    n = len(a)
    b = []
    for i in range(n - 1):
        for j in range(i + 1, n):
            b.append((a[i], a[j]))
    count = 0
    for x in b:
        if gcd(x[0], x[1]) == 1:
            count += 1
    return sqrt(6 * len(b) / count) if count else 0


if __name__ == '__main__':
    while True:
        n = int(input())
        if n == 0:
            break
        a = [0] * n
        for i in range(n):
            a[i] = int(input())
        ans = solve(a)
        if ans == 0:
            print('No estimate for this data set.')
        else:
            print(f'{ans:.6f}')

