# Codeforces - Fancy Fence
# https://codeforces.com/contest/270/problem/A
#
# Author: eloyhz
# Date: Sep/07/2020
#


if __name__ == '__main__':
    n = int(input())
    for _ in range(n):
        a = int(input())
        b = 180 - a
        if 360 % b:
            print('NO')
        else:
            print('YES')

