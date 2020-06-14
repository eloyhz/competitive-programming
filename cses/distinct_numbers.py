# Distinct Numbers
# https://cses.fi/problemset/task/1621

if __name__ == "__main__":
	n = int(input())
	values = [int(x) for x in input().split()]
	values.sort()
	count = 0
	prev = 0
	for i in range(n):
		if values[i] != prev:
			count += 1
			prev = values[i]
	print(count)
