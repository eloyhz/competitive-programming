# ITMO Academy - Binary Search
# 1.D. Fast search
# https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D

def closest_right(a, x):
	n = len(a)
	l = -1	# a[l] < x
	r = n	# a[r] >= x
	while r > l + 1:
		m = (l + r) // 2
		if a[m] < x:
			l = m
		else:
			r = m
	return r


def closest_left(a, x):
	n = len(a)
	l = -1  # a[l] <= x
	r = n   # a[r] > x
	while l < r - 1:
		m = (l + r) // 2
		if a[m] <= x:
			l = m
		else:
			r = m
	return l


if __name__ == '__main__':
	n = int(input())
	a = [int(x) for x in input().split()]
	k = int(input())
	a.sort()
	for _ in range(k):
		l, r = [int(x) for x in input().split()]
		i = closest_right(a, l)
		j = closest_left(a, r)
		# print(f'l={l}, r={r}, i={i}, j={j}')
		if i == n or j == -1:
			print(f'0 ', end='')
		else:
			print(f'{j - i + 1} ', end='')
	print()

