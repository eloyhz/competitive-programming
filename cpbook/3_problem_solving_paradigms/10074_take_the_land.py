# UVa 10074 - Take the Land
# https://onlinejudge.org/external/100/10074.pdf
# Python TLE


def prefix_range_sum(m, n, field):
	rsum = [[0 for _ in range(n)] for _ in range(m)]
	for i in range(m):
		for j in range(n):
			rsum[i][j] = field[i][j]
			if i > 0:
				rsum[i][j] += rsum[i - 1][j]
			if j > 0:
				rsum[i][j] += rsum[i][j - 1]
			if i > 0 and j > 0:
				rsum[i][j] -= rsum[i - 1][j - 1]
	return rsum


def max_zero_area(m, n, rsum):
	max_zero = 0
	for i in range(m):
		for j in range(n):
			for k in range(i, m):
				for l in range(j, n):
					area = rsum[k][l]
					if i > 0:
						area -= rsum[i - 1][l]
					if j > 0:
						area -= rsum[k][j - 1]
					if i > 0 and j > 0:
						area += rsum[i - 1][j - 1]
					if area == 0:
						width = l - j + 1
						height = k - i + 1
						max_zero = max(max_zero, width * height)
	return max_zero


if __name__ == "__main__":
	while True:
		line = input()
		if line == "":
			continue
		m, n = [int(x) for x in line.split()]
		if m == n == 0:
			break
		field = []
		for _ in range(m):
			field.append([int(x) for x in input().split()])
		prefix_sum = prefix_range_sum(m, n, field)
		print(max_zero_area(m, n, prefix_sum))

