# UVa 10855 - Rotated squares
# https://onlinejudge.org/external/108/10855.pdf


def number_of_appearances(s, b, n, N):
	count = 0
	for i in range(N - n + 1):
		for j in range(N - n + 1):
			found = True
			for k in range(n):
				for l in range(n):
					if s[k][l] != b[i + k][j + l]:
						found = False
						break
				if not found:
					break
			if found:
				count += 1
	return count


def rotate(s, n):
	r = [[0 for _ in range(n)] for _ in range(n)]
	for i in range(n):
		for j in range(n):
			r[j][n - i - 1] = s[i][j]
	return r


def test_case(N, n):
	big = []
	for _ in range(N):
		line = list(input())
		big.append(line)
	small = []
	for _ in range(n):
		line = list(input())
		small.append(line)
	result = [0, 0, 0, 0]
	result[0] = number_of_appearances(small, big, n, N)
	for i in range(1, 4):
		small = rotate(small, n)
		result[i] = number_of_appearances(small, big, n, N)
	print(result[0], result[1], result[2], result[3])


if __name__ == "__main__":
	while True:
		N, n = [int(x) for x in input().split()]
		if N == n == 0:
			break
		test_case(N, n)
