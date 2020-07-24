# TCArg 2020 - Contest #9
# Codehorses T-shirts
# https://codeforces.com/group/j1UosVRZar/contest/288666/problem/G

if __name__ == "__main__":
	n = int(input())
	a = []
	for _ in range(n):
		a.append(input())
	a.sort()
	b = []
	for _ in range(n):
		b.append(input())
	b.sort()
	counter = 0
	for i in range(n):
		if a[i] == b[i]:
			continue
		for x, y in zip(a[i], b[i]):
			if x != y:
				counter += 1
	print(counter)
		
