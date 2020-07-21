# TCArg 2020 - Contest #6
# Birthday
# https://codeforces.com/group/j1UosVRZar/contest/287776/problem/B

if __name__ == "__main__":
	n = int(input())
	a = [int(x) for x in input().split()]
	a.sort(reverse=True)
	x = []
	y = []
	for i in range(len(a) - 1):
		if i % 2 == 0:
			x.append(a.pop())
		else:
			y.append(a.pop())
	x.append(a.pop())
	while y:
		x.append(y.pop())
	for i in range(len(x)):
		print(f"{x[i]} ", end="")

