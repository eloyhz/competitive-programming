# SPOJ - EASYMATH
# https://www.spoj.com/problems/EASYMATH/
#
# Author: eloyhz
# Date: Sep/08/2020
#
# Given five numbers a1, a2, ..., a5 and a range [n, m], count ho many numbers
# in the range are divisible by none of the five
# Reference: https://www.quora.com/How-do-I-solve-the-problem-EASYMATH-on-SPOJ

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


def lcm(a, b):
    return a * b // gcd(a, b)


def divisible(n, m, x):
    r = (m - n + 1) // x
    print(f'{n = }, {m = }, {x = }, {r = }')
    return r


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


def include_exclude(n, a):
    ret = 0
    for bitmask in range(1 << 5):
        xlcm = 1
        sign = 1
        for i in range(5):
            if bitmask & (1 << i):
                sign = -sign
                g = gcd(xlcm, a[i])
                if n // xlcm > a[i] // g:
                    xlcm = n + 1
                    break
                xlcm *= a[i] // g
        ret += sign * (n // xlcm)
    return ret


def solve_editorial(n, m, a, d):
    b = [0] * 5
    for i in range(5):
        b[i] = a + i * d
    return include_exclude(m, b) - include_exclude(n - 1, b)


if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, m, a, d = [int(x) for x in input().split()]
        print(solve_editorial(n, m, a, d))

