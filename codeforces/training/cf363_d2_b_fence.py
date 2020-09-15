#
# Author: eloyhz
# Date: Sep/15/2020
#
# Codeforces (CF363-D2-B) - Fence
# https://codeforces.com/contest/363/problem/B
#


if __name__ == '__main__':
    n, k = [int(x) for x in input().split()]
    h = [int(x) for x in input().split()]
    rsum = [0] * n
    s = 0
    for i in range(n):
        s += h[i]
        rsum[i] = s
    min_sum = 10 ** 10
    ans = None
    for i in range(n - k + 1):
        # print(f'{i = }, {n = }, {k = }, {n - k + 1 = }, {i + k - 1 = }')
        if i > 0:
            s = rsum[i + k - 1] - rsum[i - 1]
        else:
            s = rsum[i + k - 1]
        if s < min_sum:
            min_sum = s
            ans = i + 1
    print(ans)
