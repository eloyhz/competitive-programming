# Queue at the School
# https://codeforces.com/contest/266/problem/B
#
# Author: eloyhz
# Date: Nov/10/2021

n, t = [int(x) for x in input().split()]
s = list(input())
for _ in range(t):
    r = [None] * n
    r[0] = s[0]
    for i in range(1, n):
        if s[i - 1] == 'B' and s[i] == 'G':
            r[i - 1], r[i] = s[i], s[i - 1]
        else:
            r[i] = s[i]
    s = r

print(''.join(s))

    