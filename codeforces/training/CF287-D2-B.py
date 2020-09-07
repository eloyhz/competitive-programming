# Codeforces - Pipeline
# https://codeforces.com/contest/287/problem/B
#
# Author: eloyhz
# Date: Sep/07/2020
#

def can(x, n):
    return (x + (x - 2) * (x - 1) // 2) >= n

if __name__ == '__main__':
    n, k = [int(x) for x in input().split()]
    if not can(k, n):
        print(-1)
    elif n == k:
        print(1)
    else:
        l = 0
        r = k
        while r - 1 > l:
            m = (l + r) // 2
            #print(l, m, r)
            if can(m, n):
                r = m
            else:
                l = m
        print(l)
 
