# Codeforces - Forming Teams
# https://codeforces.com/contest/216/problem/B
#
# Author: eloyhz
# Date: Sep/09/2020
#

def form_teams(g, colors, c, s):
    colors[s] = c
    for v in g[s]:
        if colors[v] is None:
            form_teams(g, colors, 1 - c, v)
        elif colors[v] == c:
            colors[s] = -1


def solve(n, m, g):
    colors = [None] * (n + 1)
    for i in range(1, n + 1):
        if colors[i] == None:
            form_teams(g, colors, 0, i)
    cont = colors.count(-1)
    if (n - cont) % 2 == 0:
        return cont
    else:
        return cont + 1


if __name__ == '__main__':
    n, m = [int(x) for x in input().split()]
    g = [[] for _ in range(n + 1)]
    for _ in range(m):
        a, b = [int(x) for x in input().split()]
        g[a].append(b)
        g[b].append(a)
    print(solve(n, m, g))

