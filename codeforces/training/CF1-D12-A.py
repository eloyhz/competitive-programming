# Codeforces - Theatre Square
# https://codeforces.com/contest/1/problem/A
#
# Author: eloyhz
# Date: Sep/01/2020

from math import ceil

if __name__ == '__main__':
    n, m, a = [int(x) for x in input().split()]
    a1 = ceil(n / a)
    a2 = ceil(m / a)
    print(a1 * a2)
