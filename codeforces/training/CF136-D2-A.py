# Codeforces - Presents
# https://codeforces.com/contest/136/problem/A
#
# Author: eloyhz
# Date: Aug/28/2020


if __name__ == '__main__':
    n = int(input())
    p = [int(x) for x in input().split()]
    f = []
    for i in range(n):
        f.append((p[i], i + 1))
    f.sort()
    for x in f:
        print(f'{x[1]} ', end='')
