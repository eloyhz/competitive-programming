# Codeforces - IQ Test
# https://codeforces.com/contest/287/problem/A
#
# Author: eloyhz
# Date: Sep/04/2020
#


if __name__ == '__main__':
    a = []
    for _ in range(4):
        a.append(input())
    ok = False
    for i in range(3):
        for j in range(3):
            b = 0
            w = 0
            for k in range(2):
                for l in range(2):
                    if a[i + k][j + l] == '.':
                        w += 1
                    else:
                        b += 1
            if b == 4 or w == 4 or b == 1 or w == 1:
                ok = True
                break
        if ok:
            break
    print('YES' if ok else 'NO')
