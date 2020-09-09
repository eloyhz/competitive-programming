# UVa 10305 - Ordering Tasks
# https://onlinejudge.org/external/103/10305.pdf
#
# Author: eloyhz
# Date: Sep/09/2020
#

top_sort = None
state = None

def dfs(u, adj):
    global top_sort, state
    if state[u] == 0:
        state[u] = 1
        for v in adj[u]:
            dfs(v, adj) 
        state[u] = 2
        top_sort.append(str(u))


def solve(n, m, adj):
    global top_sort, state
    top_sort = []
    state = [0] * (n + 1)
    for u in range(1, n + 1):
        dfs(u, adj)
    top_sort.reverse()
    return top_sort


if __name__ == '__main__':
    while True:
        n, m = [int(x) for x in input().split()]
        if n == m == 0:
            break
        adj = [[] for _ in range(n + 1)]
        for _ in range(m):
            i, j = [int(x) for x in input().split()]
            adj[i].append(j)
        print(' '.join(solve(n, m, adj)))

