# TCArg 2020 - Contest #1
# Photographer
# https://codeforces.com/group/j1UosVRZar/contest/287327/problem/J

if __name__ == "__main__":
	n, d = [int(x) for x in input().split()]
	a, b = [int(x) for x in input().split()]
	clients = []
	for i in range(n):
		xi, yi = [int(x) for x in input().split()]
		clients.append((xi * a + yi * b, i + 1))
	clients.sort()
	result  = []
	space = 0
	for client in clients:
		if space + client[0] <= d:
			space += client[0]
			result.append(client[1])
	print(len(result))
	for r in result:
		print(f"{r} ", end="")
