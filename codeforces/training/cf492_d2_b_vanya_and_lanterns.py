#
# Author: eloyhz
# Date: Sep/14/2020
#
# Codeforces (CF492-D2-B) - Vanya and Lanterns
# http://codeforces.com/contest/492/problem/B
#


if __name__ == '__main__':
    n, l = [int(x) for x in input().split()]
    a = [int(x) for x in input().split()]
    a.sort()
    min_d = a[0]
    for i in range(n - 1):
        min_d = max(min_d, (a[i + 1] - a[i]) / 2)
    min_d = max(min_d, l - a[-1])
    print(f'{min_d:.9f}')
