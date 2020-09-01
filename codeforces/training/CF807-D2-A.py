# Codeforces - Is it rated?
# https://codeforces.com/contest/807/problem/A
#
# Author: eloyhz
# Date: Sep/01/2020


if __name__ == '__main__':
    n = int(input())
    a = [0] * n
    b = [0] * n
    rated = False
    for i in range(n):
        a[i], b[i] = [int(x) for x in input().split()]
        if a[i] != b[i]:
            rated = True
    if rated:
        print('rated')
    else:
        maybe = True
        for i in range(n - 1):
            if a[i] < a[i + 1]:
                maybe = False
                break
        print('unrated' if not maybe else 'maybe')

