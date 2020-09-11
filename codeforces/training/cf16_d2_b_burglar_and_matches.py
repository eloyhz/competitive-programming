#
# Author: eloyhz
# Date: Sep/11/2020
#
# Codeforces (CF16-D2-B) - Burglar and Matches
# https://codeforces.com/contest/16/problem/B
# 


if __name__ == '__main__':
    n, m = [int(x) for x in input().split()]
    containers = []
    for _ in range(m):
        a, b = [int(x) for x in input().split()]
        containers.append((b, a))
    containers.sort(reverse=True)
    amount = 0
    i = 0
    while i < m and n > 0:
        a = containers[i][1]
        b = containers[i][0]
        t = a if a < n else n
        n -= t
        amount += t * b
        i += 1
    print(amount)


