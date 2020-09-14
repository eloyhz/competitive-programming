#
# Author: eloyhz
# Date: Sep/14/2020
#
# UVa 00374 - Big Mod
# https://onlinejudge.org/external/3/374.pdf
#

from sys import stdin

def modpow(x, n, m):
    if n == 0:
        return 1 % m
    u = modpow(x, n // 2, m)
    u = (u * u) % m
    if n % 2 != 0:
        u = (u * x) % m
    return u


if __name__ == '__main__':
    for line in stdin:
        if line == "\n":
            continue
        b = int(line)
        p = int(input())
        m = int(input())
        print(modpow(b, p, m))
