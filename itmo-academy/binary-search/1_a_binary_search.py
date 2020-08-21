# ITMO Academy - Binary Search
# 1.A. Binary Search
# https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A


def bin_search_1(a, x):
	""" First approach """
	l = 0
	r = n - 1
	ok = False
	while l <= r:
		m = (l + r) // 2
		if a[m] == x:
			ok = True
			break
		elif a[m] < x:
			l = m + 1
		elif a[m] > x:
			r = m - 1
	return ok


def bin_search_2(a, x):
	""" Closest to the Right """
	l = -1	# a[l] < x
	r = n	# a[r] >= x
	while l + 1 < r:
		m = (l + r) // 2
		if a[m] < x:
			l = m
		else:
			r = m
	if r < n and a[r] == x:
		return True
	else:
		return False


def bin_search_3(a, x):
	""" Closest to the Left """
	l = -1	# a[l] <= x
	r = n	# a[r] > x
	while l + 1 < r:
		m = (l + r) // 2
		if a[m] <= x:
			l = m
		else:
			r = m
	return l >= 0 and a[l] == x


if __name__ == '__main__':
	n, k = [int(x) for x in input().split()]
	a = [int(x) for x in input().split()]
	q = [int(x) for x in input().split()]
	for x in q:
		if bin_search_3(a, x):
			print('YES')
		else:
			print('NO')

