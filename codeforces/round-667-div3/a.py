# Codeforces - Yet Another Two Integers Problem
# https://codeforces.com/contest/1409/problem/A
#
# Author: eloyhz
# Date: Sep/04/2020
#


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        a, b = [int(x) for x in input().split()]
        if a == b:
            print(0)
        else:
            dif = abs(a - b)
            print(dif // 10 + (1 if dif % 10 else 0))

