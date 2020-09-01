# Codeforces - I Wanna Be the Guy
# https://codeforces.com/contest/469/problem/A
#
# Author: eloyhz
# Date: Sep/01/2020


if __name__ == '__main__':
    n = int(input())
    levels = [False] * n
    a = [int(x) for x in input().split()]
    for i in range(a[0]):
        levels[a[i + 1] - 1] = True
    a = [int(x) for x in input().split()]
    for i in range(a[0]):
        levels[a[i + 1] - 1] = True
    ok = True
    for x in levels:
        if not x:
            ok = False
            break
    print('I become the guy.' if ok else 'Oh, my keyboard!')

