# SPOJ - EASYMATH
# https://www.spoj.com/problems/EASYMATH/
#
# Author: eloyhz
# Date: Sep/08/2020
#

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


def lcm(a, b):
    return a * b // gcd(a, b)


def divisible(n, m, x):
    return (m - n + 1) // x

def solve(n, m, a, d):
    b = [0] * 5
    for i in range(5):
        b[i] = a + i * d
    count = 0
    for i in range(1 << 5):
        p = 1
        c = 0
        for j in range(5):
            if i & (1 << j):
                p = lcm(p, b[j])
                c += 1
        if c == 0:
            continue
        elif c % 2 != 0:    # include
            count += divisible(n, m, p)
        else:               # exclude
            count -= divisible(n, m, p)
    return (m - n + 1) - count


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, m, a, d = [int(x) for x in input().split()]
        print(solve(n, m, a, d))

