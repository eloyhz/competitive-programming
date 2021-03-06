#
# Author: eloyhz
# Date: Sep/11/2020
#
# Codeforces (CF227-D2-B) - Effective Approach
# https://codeforces.com/contest/227/problem/B
#

def find(c, x):
    n = len(c)
    left = 0
    right = n - 1
    while left <= right:
        mid = (left + right) // 2
        if c[mid][0] == x:
            return c[mid][1]
        elif c[mid][0] > x:
            right = mid - 1
        else:
            left = mid + 1
    return 0


def solve(n, a, m, b):
    c = [None] * n
    for i, x in enumerate(a):
        c[i] = (x, i + 1)
    c.sort()
    vasya = 0
    petya = 0
    for x in b:
        i = find(c, x)
        if i == 0:
            vasya += n
            petya += n
        else:
            vasya += i
            petya += n - i + 1
    return (vasya, petya)


def editorial(n, a, m, b):
    c = [None] * n
    for i, x in enumerate(a):
        c[x - 1] = i + 1
    vasya = 0
    petya = 0
    for x in b:
        i = c[x - 1]
        vasya += i
        petya += n - i + 1
    return (vasya, petya)


if __name__ == '__main__':
    n = int(input())
    a = [int(x) for x in input().split()]
    m = int(input())
    b = [int(x) for x in input().split()]
    result = editorial(n, a, m, b)
    print(result[0], result[1])

