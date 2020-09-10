# Codeforces - Bit++
# https://codeforces.com/contest/282/problem/A
#
# Author: eloyhz
# Date: Sep/10/2020
#


if __name__ == '__main__':
    n = int(input())
    x = 0
    for _ in range(n):
        line = input().replace('X', '')
        if line == '++':
            x += 1
        else:
            x -= 1
    print(x)
