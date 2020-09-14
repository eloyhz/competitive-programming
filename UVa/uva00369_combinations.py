#
# Author: eloyhz
# Date: Sep/14/2020
#
# UVa 00369 - Combinations
# https://onlinejudge.org/external/3/369.pdf
#

def factorial(m):
    ans = 1
    for i in range(2, m + 1):
        ans *= i
    return ans


def solve(n, m):
    r = n - m
    d = 1
    for i in range(r + 1, n + 1):
        d *= i
    return d // factorial(m)


if __name__ == '__main__':
    while True:
        n, m = [int(x) for x in input().split()]
        if n == m == 0:
            break
        ans = solve(n, m) 
        print(f'{n} things taken {m} at a time is {ans} exactly.')
