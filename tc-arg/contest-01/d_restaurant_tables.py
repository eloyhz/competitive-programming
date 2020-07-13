# TCArg 2020 - Contest #1
# Restaurant Tables
# https://codeforces.com/group/j1UosVRZar/contest/287327/problem/D

if __name__ == "__main__":
	n, a, b = [int(x) for x in input().split()]
	clients = [int(x) for x in input().split()]
	c = 0
	denies = 0
	for client in clients:
		if client == 1:
			if a > 0:
				a -= 1
			elif b > 0:
				b -= 1
				c += 1
			elif c > 0:
				c -= 1
			else:
				denies += 1
		else:
			if b > 0:
				b -= 1
			else:
				denies += 2
	print(denies)

