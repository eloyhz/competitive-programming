# Codeforces - Dice Tower
# https://codeforces.com/contest/225/problem/A
#
# Author: eloyhz
# Date: Sep/02/2020
#


if __name__ == '__main__':
    n = int(input())
    x = int(input())
    d = []
    for _ in range(n):
        d.append([int(x) for x in input().split()])
    ady = {}
    for i in range(1, 7):
        ady[i] = set()
        for j in range(1, 7):
            if i != j and (i + j) != 7:
                ady[i].add(j)
    ok = True
    for p in d:
        t = ady[p[0]] & ady[p[1]]
        # print(f'p={p}, t={t}, x={x}')
        if x not in t:
            ok = False
            break
        x = (t - set([x])).pop()
    print('YES' if ok else 'NO')


