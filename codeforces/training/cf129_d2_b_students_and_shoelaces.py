#
# Author: eloyhz
# Date: Sep/18/2020
#
# Codeforces (CF129-D2-B) - Students and Shoelaces
# https://codeforces.com/contest/129/problem/B
#


if __name__ == '__main__':
    n, m = [int(x) for x in input().split()]
    adj = [[] for _ in range(n + 1)]
    for _ in range(m):
        a, b = [int(x) for x in input().split()]
        adj[a].append(b)
        adj[b].append(a)
    ans = 0
    while True:
        reprimend = set()
        for u in range(1, n + 1):
            if len(adj[u]) == 1:
                reprimend.add(u)
        if not reprimend:
            break
        ans += 1
        while reprimend:
            u = reprimend.pop()
            v = adj[u][0]
            adj[v].remove(u)
            adj[u].remove(v)
            if v in reprimend:
                reprimend.remove(v)
    print(ans)


