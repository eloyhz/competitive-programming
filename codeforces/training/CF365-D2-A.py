# Codeforces - Good Number
# https://codeforces.com/contest/365/problem/A
#
# Author: eloyhz
# Date: Sep/02/2020
#

def is_good(num, k):
    g = [False] * 10
    while num > 0:
        d = num % 10
        g[d] = True
        num //= 10
    good = True
    for i in range(k + 1):
        if not g[i]:
            good = False
            break
    return good


if __name__ == '__main__':
    n, k = [int(x) for x in input().split()]
    count = 0
    for i in range(n):
        ai = int(input())
        if is_good(ai, k):
            count += 1
    print(count)


