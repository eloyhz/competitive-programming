# Codeforces - Olesya and Rodion (CF584-D2-A)
# https://codeforces.com/contest/584/problem/A
#
# Author: eloyhz
# Date: Sep/01/2020


if __name__ == '__main__':
    n, t = [int(x) for x in input().split()]
    x = 10 ** (n - 1)
    if n == 1:
        print(-1 if t == 10 else t)
    elif t == 10:
        print(x)
    else:
        print(x * t)

