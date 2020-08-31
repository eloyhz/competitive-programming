# Codeforces - Lineland Mail
# https://codeforces.com/contest/567/problem/A
#
# Author: eloyhz
# Date: Aug/28/2020


if __name__ == '__main__':
    n = int(input())
    a = [int(x) for x in input().split()]
    for i in range(n):
        if i == 0:
            min_i = abs(a[i] - a[i + 1])
        elif i == n - 1:
            min_i = abs(a[i] - a[i - 1])
        else:
            min_i = min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]))
        max_i = max(abs(a[i] - a[0]), abs(a[i] - a[-1]))
        print(min_i, max_i)

