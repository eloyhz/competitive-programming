# Codeforces - Help Vasilisa the Wise 2
# https://codeforces.com/contest/143/problem/A
#
# Author: eloyhz
# Date: Sep/02/2020
#


if __name__ == '__main__':
    r1, r2 = [int(x) for x in input().split()]
    c1, c2 = [int(x) for x in input().split()]
    d1, d2 = [int(x) for x in input().split()]
    found = False
    for x1 in range(1, 10):
        for x2 in range(1, 10):
            if x1 == x2:
                continue
            for x3 in range(1, 10):
                if x1 == x3 or x2 == x3:
                    continue
                for x4 in range(1, 10):
                    if x1 == x4 or x2 == x4 or x3 == x4:
                        continue
                    if x1 + x2 == r1  and x3 + x4 == r2 \
                    and x1 + x3 == c1 and x2 + x4 == c2 \
                    and x1 + x4 == d1 and x2 + x3 == d2:
                        found = True
                        break
                if found:
                    break
            if found:
                break
        if found:
            break
    if not found:
        print(-1)
    else:
        print(x1, x2)
        print(x3, x4)

