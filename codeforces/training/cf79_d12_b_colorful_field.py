#
# Author: eloyhz
# Date: Sep/17/2020
#
# Codeforces (CF79-D12-B) - Colorful Field
# https://codeforces.com/contest/79/problem/B
#


if __name__ == '__main__':
    n, m, k, t = [int(x) for x in input().split()]
    field = [[0 for _ in range(m + 1)] for _ in range(n + 1)]
    for _ in range(k):
        a, b = [int(x) for x in input().split()]
        field[a][b] = -1
    plant = 0
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if field[i][j] == -1:
                continue
            field[i][j] = plant
            plant = (plant + 1) % 3
    for _ in range(t):
        i, j = [int(x) for x in input().split()]
        if field[i][j] == -1:
            print('Waste')
        elif field[i][j] == 0:
            print('Carrots')
        elif field[i][j] == 1:
            print('Kiwis')
        elif field[i][j] == 2:
            print('Grapes')

