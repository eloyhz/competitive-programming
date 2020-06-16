# UVa 108 - Maximum Sum
# https://onlinejudge.org/external/1/108.pdf
# Reference: Competitive Programming 3, Halim & Halim, p. 104
# This problem is solved using an algorithm O(n^4)
# The Python version is slower than C++ version


def maximum_sum(n):
	nums = []
	k = 0
	while k < n * n:
		try:
			line = input()
		except EOFError:
			break
		z = [int(x) for x in line.split()]
		k += len(z)
		nums += z
	a = [[0 for _ in range(n)] for _ in range(n)]
	k = 0
	for i in range(n):
		for j in range(n):
			a[i][j] = nums[k]
			k += 1
			if i > 0:
				a[i][j] += a[i - 1][j]
			if j > 0:
				a[i][j] += a[i][j - 1]
			if i > 0 and j > 0:
				a[i][j] -= a[i - 1][j - 1]
	max_sub_rect = -127 * 100 * 100
	for i in range(n):
		for j in range(n):
			for k in range(i, n):
				for l in range(j, n):
					sub_rect = a[k][l]
					if i > 0:
						sub_rect -= a[i - 1][l]
					if j > 0:
						sub_rect -= a[k][j - 1]
					if i > 0 and j > 0:
						sub_rect += a[i - 1][j - 1]
					max_sub_rect = max(max_sub_rect, sub_rect)
	print(max_sub_rect)

if __name__ == "__main__":
	while True:
		try:
			n = int(input())
		except EOFError:
			break
		maximum_sum(n)

