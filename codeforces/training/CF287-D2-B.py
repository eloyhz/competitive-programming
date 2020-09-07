# Codeforces - Pipeline
# https://codeforces.com/contest/287/problem/B
#
# Author: eloyhz
# Date: Sep/07/2020
#

def is_good(x, n, k):
    y = k - x + 1
    return (y + k * (k - 1) // 2 - y * (y - 1) // 2) >= n


if __name__ == '__main__':
    n, k = [int(x) for x in input().split()]
    if n == 1:
        print(0)
    elif (k + (k - 2) * (k - 1) // 2) < n:
        print(-1)
    elif k >= n:
        print(1)
    else:
        l = 0
        r = k
        while r > l + 1:
            m = (l + r) // 2
            if is_good(m, n, k):
                r = m
            else:
                l = m
        print(r)
 
