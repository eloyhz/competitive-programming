#
# Author: eloyhz
# Date: Sep/14/2020
#
# UVa 00713 - Adding Reversed Numbers
# https://onlinejudge.org/external/7/713.pdf
#

def reverse(num):
    ans = 0
    while num > 0:
        ans = ans * 10 + num % 10
        num //= 10
    return ans


def solve(a, b):
    ra = reverse(a)
    rb = reverse(b)
    s = ra + rb
    rs = reverse(s)
    return rs


if __name__ == '__main__':
    n = int(input())
    for _ in range(n):
        a, b = [int(x) for x in input().split()]
        ans = solve(a, b)
        print(ans)

