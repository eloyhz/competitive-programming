# Team Olympiad
# https://codeforces.com/contest/490/problem/A
#
# Author: eloyhz
# Date: Aug/26/2020

from collections import Counter

if __name__ == '__main__':
    n = int(input())
    a = [int(x) for x in input().split()]
    c = [0] * 3
    for x in a:
        c[x - 1] += 1
    w = min(c)
    if w == 0:
        print(0)
    else:
        h = [[] for _ in range(3)] 
        for i, x in enumerate(a):
            h[x - 1].append(i + 1)
        print(w)
        for i in range(w):
            for j in range(3):
                print(f'{h[j][i]} ', end='')
            print()

