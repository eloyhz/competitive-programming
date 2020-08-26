# Magnets
# https://codeforces.com/contest/344/problem/A


if __name__ == '__main__':
	n = int(input())
	groups = 1
	prev = input()
	for _ in range(n - 1):
		current = input()
		if prev != current:
			groups += 1
		prev = current
	print(groups)

