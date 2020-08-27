# Light, more light
# https://onlinejudge.org/external/101/10110.pdf
#
# Author: eloyhz
# Date: Aug/26/2020

from math import sqrt
from math import ceil 


def test_case_tle(n):
    bulb = 0
    for i in range(1, n + 1):
        if n % i == 0:
            bulb = 1 - bulb
    return bulb


def test_case_tle_2(n):
    m = ceil(sqrt(n))
    for i in range(1, m + 1):
        if i * i == n:
            return True
    return False


def test_case(n):
    m = int(sqrt(n))
    return n == m ** 2


if __name__ == '__main__':
    while True:
        n = int(input())
        if n == 0:
            break
        result = test_case(n)
        print('yes' if result else 'no')
        

