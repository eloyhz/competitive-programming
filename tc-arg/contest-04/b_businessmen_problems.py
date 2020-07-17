# TCArg 2020 - Contest #4
# Businessmen Problems
# https://codeforces.com/group/j1UosVRZar/contest/287848/problem/B

if __name__ == "__main__":
	elements = set()
	n = int(input())
	chemforces = {}
	for _ in range(n):
		a, x = [int(v) for v in input().split()]
		chemforces[a] = x
		elements.add(a)
	m = int(input())
	topchemist = {}
	for _ in range(m):
		b, y = [int(v) for v in input().split()]
		topchemist[b] = y
		elements.add(b)
	total_income = 0
	for elem in elements:
		if elem in chemforces and elem in topchemist:
			total_income += max(chemforces[elem], topchemist[elem])
		elif elem in chemforces and elem not in topchemist:
			total_income += chemforces[elem]
		elif elem not in chemforces and elem in topchemist:
			total_income += topchemist[elem]
	print(total_income)

