#
# Author: eloyhz
# Date: Sep/15/2020
#
# Codeforces (CF433-D2-B) - Kuriyama Mirai's Stones
# https://codeforces.com/contest/433/problem/B
#


if __name__ == '__main__':
    n = int(input())
    v = [int(x) for x in input().split()]
    u = v[:]
    u.sort()
    us = 0
    vs = 0
    vsum = [0] * n
    usum = [0] * n
    for i in range(n):
        vs += v[i]
        vsum[i] = vs
        us += u[i]
        usum[i] = us
    m = int(input())
    for _ in range(m):
        t, l, r = [int(x) for x in input().split()]
        if t == 1:
            print(vsum[r - 1] if l == 1 else vsum[r - 1] - vsum[l - 2])
        else:
            print(usum[r - 1] if l == 1 else usum[r - 1] - usum[l - 2])

