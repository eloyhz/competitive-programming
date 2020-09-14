#
# Author: eloyhz
# Date: Sep/14/2020
#
# Timus 1607 - Taxi
# https://acm.timus.ru/problem.aspx?space=1&num=1607
#


if __name__ == '__main__':
    a, b, c, d = [int(x) for x in input().split()]
    while (a + b) < (c - d):
        a += b
        c -= d
    if (a + b) <= c:
        print(a + b)
    else:
        print(c if a < c else a)

