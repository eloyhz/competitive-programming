# Codeforces - Calculating Function
# https://codeforces.com/contest/486/problem/A
#
# Author: eloyhz
# Date: Sep/08/2020
#

from math import ceil


def s(n):
    return n * (n + 1) // 2


if __name__ == '__main__':
    n = int(input())
    even = 2 * s(n // 2)
    odd = ceil(n / 2) + 2 * s(n // 2 + (0 if n % 2 else -1))
    print(even - odd)

