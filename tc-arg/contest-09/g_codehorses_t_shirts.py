# TCArg 2020 - Contest #9
# Codehorses T-shirts
# https://codeforces.com/group/j1UosVRZar/contest/288666/problem/G

def input_shirts(n):
	shirts = {}
	for _ in range(n):
		shirt = input()
		size = len(shirt)
		if size not in shirts:
			shirts[size] = [shirt]
		else:
			shirts[size].append(shirt)
	for k in shirts:
		shirts[k].sort()
	return shirts


if __name__ == "__main__":
	n = int(input())
	previous_shirts = input_shirts(n)
	current_shirts = input_shirts(n)
	counter = 0
	for k in previous_shirts:
		a = previous_shirts[k]
		b = current_shirts[k]
		for i in range(len(a)):
			if a[i] == b[i]:
				continue
			for x, y in zip(a[i], b[i]):
				if x != y:
					counter += 1
	print(counter)
		
