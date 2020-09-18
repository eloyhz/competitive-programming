#
# Author: eloyhz
# Date: Sep/18/2020
#
# Codeforces (CF469-D2-B) - Chat Online
# https://codeforces.com/contest/469/problem/B
#


if __name__ == '__main__':
    p, q, l, r = [int(x) for x in input().split()]
    ab = []
    for _ in range(p):
        ab.append([int(x) for x in input().split()])
    cd = []
    for _ in range(q):
        cd.append([int(x) for x in input().split()])
    count = 0
    s = set()
    for t in range(l, r + 1):
        common_time = False
        for x in cd:
            ci = x[0] + t
            di = x[1] + t
            for y in ab:
                ai = y[0]
                bi = y[1]
                if ci <= ai <= di or ai <= ci <= bi:
                    count += 1
                    s.add((ai, bi, ci, di))
                    common_time = True
                    break
            if common_time:
                break
    print(count)
