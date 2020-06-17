# UVa 836 - Largest Submatrix
# https://onlinejudge.org/external/8/836.pdf
# Reference: Competitive Programming 3, Halim & Halim

from sys import maxsize

def load_matrix():
	matrix = []
	while True:
		try:
			line = input()
		except EOFError:
			break
		if line == "":
			break
		matrix.append([1 if x == '1' else (-maxsize - 1) for x in list(line)])
	return matrix

def range_sum_matrix(matrix):
	n = len(matrix)
	rsum = [[0 for _ in range(n)] for _ in range(n)]
	for i in range(n):
		for j in range(n):
			rsum[i][j] = matrix[i][j]
			if i > 0:
				rsum[i][j] += rsum[i - 1][j]
			if j > 0:
				rsum[i][j] += rsum[i][j - 1]
			if i > 0 and j > 0:
				rsum[i][j] -= rsum[i - 1][j - 1]
	return rsum


def max_submatrix(matrix, rsum):
	n = len(matrix)
	max_sum = 0
	for i in range(n):
		for j in range(n):
			for k in range(i, n):
				for l in range(j, n):
					sub_rect = rsum[k][l]
					if i > 0:
						sub_rect -= rsum[i - 1][l]
					if j > 0:
						sub_rect -= rsum[k][j - 1]
					if i > 0 and j > 0:
						sub_rect += rsum[i - 1][j - 1]
					max_sum = max(max_sum, sub_rect)
	return max_sum

if __name__ == "__main__":
	t = int(input())
	input()
	for tc in range(t, 0, -1):
		matrix = load_matrix()
		rsum = range_sum_matrix(matrix)
		print(max_submatrix(matrix, rsum))
		if tc > 1:
			print()

		
