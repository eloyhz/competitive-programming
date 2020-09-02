# Codeforces - Mountain Scenery
# https://codeforces.com/contest/218/problem/A
# 
# Author: eloyhz
# Date: Sep/02/2020
#


if __name__ == '__main__':
    n, k = [int(x) for x in input().split()]
    a = [int(x) for x in input().split()]
    i = 1
    while k > 0:
        if a[i - 1] < a[i] - 1 > a[i + 1]:
            a[i] -= 1
            k -= 1
        i += 2
    for x in a:
        print(f'{x} ', end='')
    print()
