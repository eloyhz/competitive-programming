# Codeforces - Burning Midnight Oil
# https://codeforces.com/contest/165/problem/B
#
# Author: eloyhz
# Date: Sep/07/2020
#

def lines(v, k):
    s = v
    p = k
    while v // k > 0:
        s += v // k
        k *= p
    return s


def solve(n, k):
    l = 0
    r = 10 ** 10
    while r > l + 1:
        m = (l + r) // 2
        # print(l, m, r)
        if lines(m, k) >= n:
            r = m
        else:
            l = m
    return r


if __name__ == '__main__':
    n, k = [int(x) for x in input().split()]
    print(solve(n, k))

