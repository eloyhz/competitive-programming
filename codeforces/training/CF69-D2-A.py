# Codeforces - Young Physicist
# https://codeforces.com/contest/69/problem/A
#
# Author: eloyhz
# Date: Sep/10/2020
#


if __name__ == '__main__':
    n = int(input())
    x = 0
    y = 0
    z = 0
    for _ in range(n):
        xi, yi, zi = [int(x) for x in input().split()]
        x += xi
        y += yi
        z += zi
    if x == y == z == 0:
        print('YES')
    else:
        print('NO')

