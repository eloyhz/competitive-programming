# ITMO Academy - Binary Search
# 1.C. Closest to the Right
# https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C

if __name__ == '__main__':
	n, k = [int(x) for x in input().split()]
	a = [int(x) for x in input().split()]
	q = [int(x) for x in input().split()]

	for x in q:
		l = -1	# a[l] < x
		r = n	# a[r] >= x
		while l + 1 < r:
			m = (l + r) // 2
			if a[m] < x:
				l = m
			else:
				r = m
		print(r + 1)


