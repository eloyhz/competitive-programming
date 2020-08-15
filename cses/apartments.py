# CSES - Apartments
# https://cses.fi/problemset/task/1084

if __name__ == "__main__":
	n, m, k = [int(x) for x in input().split()]
	a = [int(x) for x in input().split()]	# desired apartment size
	b = [int(x) for x in input().split()]	# size of each apartment
	a.sort()
	b.sort(reverse=True)
	count = 0
	i = 0
	while i < len(a):
		x = a[i]
		if not b:
			break
		if x - k <= b[-1] <= x + k:
			count += 1
			b.pop()
			i += 1
		elif b[-1] < x - k:
			b.pop()
		elif b[-1] > x + k:
			i += 1
	print(count)
		
