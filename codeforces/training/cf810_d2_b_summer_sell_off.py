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
        a.append(Day(k, l))
    a.sort(reverse=True, key=attrgetter('clients'))
    ans = 0
    factor = 2
    for d in a:
        if d.products == 0:   # this day there are no products
            continue
        if f > 0:
            f -= 1
        else:
            factor = 1
        ans += min(d.clients, d.products * factor)
    print(ans)
