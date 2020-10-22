# CSES - Minimizing Coins
# https://cses.fi/problemset/task/1634
#
# Author: eloyhz
# Date: oct/22/20
#
# Remarks: TLE even with PyPy
#

def solve(target, coins):
    value = [0] * (target + 1)
    for x in range(1, target + 1):
        value[x] = 10 ** 7
        for c in coins:
            if x - c >= 0:
                value[x] = min(value[x], value[x - c] + 1)
    return value[target] if value[target] < 10 ** 7 else -1


if __name__ == '__main__':
    # n: number of coins
    # x: desired sum of money
    # c: values of each coin
    n, x = [int(x) for x in input().split()]
    c = [int(x) for x in input().split()]
    print(solve(x, c))

