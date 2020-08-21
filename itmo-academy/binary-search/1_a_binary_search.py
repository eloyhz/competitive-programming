# ITMO Academy - Binary Search
# 1.A. Binary Search
# https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

if __name__ == '__main__':
	n, k = [int(x) for x in input().split()]
	a = [int(x) for x in input().split()]
	q = [int(x) for x in input().split()]
	for x in q:
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
		if ok:
			print('YES')
		else:
			print('NO')

