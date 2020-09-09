# UVa 00352 - The Seasonal War
# https://onlinejudge.org/external/3/352.pdf
#
# Author: eloyhz
# Date: Sep/08/2020
#

from sys import stdin

image = None
visited = None
n = None

def dfs(i, j):
    global image, visited, n
    if i < 0 or i >= n or j < 0 or j >= n:
        return
    if visited[i][j] or image[i][j] == '0':
        return
    visited[i][j] = True
    for a in range(3):
        for b in range(3):
            dfs(i - 1 + a, j - 1 + b)


def solve():
    global image, visited, n
    eagles = 0
    visited = [[False for _ in range(n)] for _ in range(n)]
    for i in range(n):
        for j in range(n):
            if not visited[i][j] and image[i][j] == '1':
                eagles += 1
                dfs(i, j)
    return eagles


if __name__ == '__main__':
    num = 0
    for line in stdin:
        n = int(line)
        image = []
        for _ in range(n):
            image.append(input())
        eagles = solve()
        num += 1
        print(f'Image number {num} contains {eagles} war eagles.')

