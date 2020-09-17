#
# Author: eloyhz
# Date: Sep/15/2020
#
# Codeforces (CF88-D2-B) - Keyboard
# https://codeforces.com/contest/88/problem/B
#

import math


if __name__ == '__main__':
    n, m, x = [int(x) for x in input().split()]
    keyboard = []
    shifts = []
    for i in range(n):
        row = input()
        keyboard.append(row)
        for j in range(m):
            if row[j] == 'S':
                shifts.append((i, j))
    dist = {}
    for i in range(n):
        for j in range(m):
            key = keyboard[i][j]
            if key == 'S':
                continue
            if key not in dist:
                dist[key] = math.inf
            for s in shifts:
                d = math.sqrt((s[0] - i) ** 2 + (s[1] - j) ** 2)
                dist[key] = min(dist[key], d)
    q = int(input())
    text = input()
    ok = True
    count = 0
    for c in text:
        if c.lower() not in dist:
            ok = False
            break
        if c.isupper():
            if dist[c.lower()] == math.inf:
                ok = False
                break
            if dist[c.lower()] > x:
                count += 1
    print(count if ok else -1)



            
