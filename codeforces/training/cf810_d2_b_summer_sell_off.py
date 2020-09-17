#
# Author: eloyhz
# Date: Sep/17/2020
#
# Codeforces (CF79-D12-B) - Colorful Field
# https://codeforces.com/contest/810/problem/B
#


if __name__ == '__main__':
    n, f = [int(x) for x in input().split()]
    a = []
    for _ in range(n):
        k, l = [int(x) for x in input().split()]
        a.append([l, k])  # clients, products
    a.sort(reverse=True)
    ans = 0
    for x in a:
        if x[1] == 0:   # this day there are no products
            continue
        if f > 0:
            x[1] *= 2   # double the products the first f days
            f -= 1
        else:
            break
    for x in a:
        if x[1] == 0:
            continue
        if x[0] <= x[1]:
            ans += x[0]
        else:
            ans += x[1]
    print(ans)
