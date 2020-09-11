#
# Author: eloyhz
# Date: Sep/11/2020
#
# Codeforces (CF463-D2-B) - Caisa and Pylons
# https://codeforces.com/contest/463/problem/B
#


def solve_wa(n, h):
    money = h[0]
    energy = 0
    for i in range(n - 1):
        # print(f'{i = }, {energy = }, {money = }, {h[i] = }, {h[i + 1] = }')
        if h[i] + energy < h[i + 1]:
            money += h[i + 1] - h[i]
            energy = 0
        else:
            energy += h[i] - h[i + 1]
    return money


def solve_editorial(n, h):
    energy = 0
    money = h[0]
    for k in range(n - 1):
        energy += h[k] - h[k + 1]
        if energy < 0:
            money += abs(energy)
            energy = 0
    return money


if __name__ == '__main__':
    n = int(input())
    h = [int(x) for x in input().split()]
#    print(max(h))
    print(solve_editorial(n, h))

    

