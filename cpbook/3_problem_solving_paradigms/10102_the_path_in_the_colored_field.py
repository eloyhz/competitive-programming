# UVa 10102 - The path in the colored field
# https://onlinejudge.org/external/101/10102.pdf

import sys

def test_case(field_size):
	field = []
	for _ in range(field_size):
		f = input()
		row = [int(x) for x in list(f)]
		field.append(row)
	ones = []
	threes = []
	for i in range(field_size):
		for j in range(field_size):
			if field[i][j] == 1:
				ones.append((i, j))
			elif field[i][j] == 3:
				threes.append((i, j))
	result = 0
	for one in ones:
		distance = sys.maxsize
		for three in threes:
			dist = abs(one[0] - three[0]) + abs(one[1] - three[1])
			distance = min(distance, dist)
		result = max(result, distance)
	print(result)


if __name__ == "__main__":
	while True:
		try:
			m = int(input())
			if m == "":
				break
		except EOFError:
			break
		test_case(m)

