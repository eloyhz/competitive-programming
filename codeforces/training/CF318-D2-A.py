# Codeforces - Even Odds
# https://codeforces.com/contest/318/problem/A

from math import ceil

if __name__ == '__main__':
    n, k = [int(x) for x in input().split()]
    m = ceil(n / 2)
    if k <= m:
        print(k * 2 - 1)
    else:
        print((k - m) * 2)

