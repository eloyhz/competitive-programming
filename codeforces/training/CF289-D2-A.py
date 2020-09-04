# Codeforces - Polo the Penguin and Segments
# https://codeforces.com/contest/289/problem/A
#
# Author: eloyhz
# Date: Sep/04/2020
#


if __name__ == '__main__':
    n, k = [int(x) for x in input().split()]
    s = 0
    for _ in range(n):
        l, r = [int(x) for x in input().split()]
        s += r - l + 1
    print(k - s % k if s % k else 0)

