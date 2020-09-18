#
# Author: eloyhz
# Date: Sep/18/2020
#
# Codeforces (CF400-D2-B) - Inna and New Matrix of Candies
# https://codeforces.com/contest/400/problem/B
#


if __name__ == '__main__':
    n, m = [int(x) for x in input().split()]
    best = 1001
    mat = []
    for _ in range(n):
        line = input()
        g = line.find('G')
        s = line.find('S')
        if s > g:
            best = min(best, s - g)
        mat.append(line)
    ok = True
    for line in mat:
        g = line.find('G')
        s = line.find('S') 
        d = m - g - 1
        if g > s and d <= best:
            ok = False
            break
    print(best if ok else -1)
