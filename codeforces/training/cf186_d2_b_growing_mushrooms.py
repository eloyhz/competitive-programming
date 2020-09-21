#
# Author: eloyhz
# Date: Sep/21/2020
#
# Codeforces (CF186-D2-B) - Growing Mushrooms
# https://codeforces.com/contest/186/problem/B
#

from operator import itemgetter


if __name__ == '__main__':
    n, t1, t2, k = [int(x) for x in input().split()]
    dwarfs = []
    for i in range(n):
        a, b = [int(x) for x in input().split()]
        r = (100 - k) / 100
        h = max(a * t1 * r + b * t2, b * t1 * r + a * t2)
        dwarfs.append((h, i + 1))
    dwarfs.sort(key=itemgetter(1))
    dwarfs.sort(reverse=True, key=itemgetter(0))
    for d in dwarfs:
        print(f'{d[1]} {d[0]:.2f}')

