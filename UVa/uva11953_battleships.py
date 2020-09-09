# UVa 11953 - Battleships
# https://onlinejudge.org/external/119/11953.pdf
#
# Author: eloyhz
# Date: Sep/08/2020
#

def mark(i, j, n, grid):
    if i < 0 or i >= n or j < 0 or j >= n:
        return
    if grid[i][j] == '.' or grid[i][j] == 'y':
        return
    grid[i][j] = 'y'
    mark(i - 1, j, n, grid)
    mark(i + 1, j, n, grid)
    mark(i, j - 1, n, grid)
    mark(i, j + 1, n, grid)

def solve(n, grid):
    alive = 0
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 'x':
                alive += 1
                mark(i, j, n, grid)
    return alive

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        grid = []
        for _ in range(n):
            grid.append(list(input()))
        x = solve(n, grid)
        print(f'Case {i + 1}: {x}')

