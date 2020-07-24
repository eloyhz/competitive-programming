def dfs(g, s, c, visited, color):
	if visited[s]:
		return
	visited[s] = True
	color[s] = c
	for u in g[s]:
		dfs(g, u, 1 - c, visited, color)


if __name__ == "__main__":
	n = int(input())
	g = [[] for _ in range (n + 1)]
	for _ in range(n - 1):
		u, v = [int(x) for x in input().split()]
		g[u].append(v)
		g[v].append(u)
	visited = [False] * (n + 1)
	color = [None] * (n + 1)
	dfs(g, 1, 1, visited, color)
	a = b = 0
	for c in color:
		if c == 0:
			a += 1
		elif c == 1:
			b += 1
	result = a * b - (n - 1)
	print(result)
