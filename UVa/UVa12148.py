# UVa 12148 - Electricity
# https://onlinejudge.org/external/121/12148.pdf
#
# Author: eloyhz
# Date: Sep/09/2020
#

from datetime import date

def solve(d):
    days = 0
    total = 0
    i = 1
    n = len(d)
    while i < n:
        if (d[i][0] - d[i - 1][0]).days == 1:
            days += 1
            total += d[i][1] - d[i - 1][1]
        i += 1
    return (days, total)


if __name__ == '__main__':
    while True:
        n = int(input())
        if n == 0:
            break
        dates = []
        for _ in range(n):
            d, m, y, c = [int(x) for x in input().split()]
            dates.append((date(y, m, d), c))
        result = solve(dates)
        print(result[0], result[1])

