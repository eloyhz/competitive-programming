#
# Author: eloyhz
# Date: Sep/17/2020
#
# Codeforces (CF79-D12-B) - Colorful Field
# https://codeforces.com/contest/810/problem/B
#

from collections import namedtuple
from operator import attrgetter

Day = namedtuple('Day', ['products', 'clients'])

if __name__ == '__main__':
    n, f = [int(x) for x in input().split()]
    a = []
    for _ in range(n):
        k, l = [int(x) for x in input().split()]
        a.append((min(k * 2, l) - min(k, l), Day(k, l)))
    a.sort(reverse=True)
    ans = 0
    factor = 2
    for d in a:
        if f > 0:
            f -= 1
        else:
            factor = 1
        ans += min(d[1].clients, d[1].products * factor)
    print(ans)
