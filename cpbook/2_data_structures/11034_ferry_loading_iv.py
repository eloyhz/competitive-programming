# UVa 11034 - Ferry Loading IV
# https://onlinejudge.org/external/110/11034.pdf

def load_ferry(side, length):
	s = 0
	while len(side) > 0:
		if s + side[0] <= length:
			s += side.pop(0)
		else:
			break


def test_case():
	l, m = [int(x) for x in input().split()]
	left = []
	right = []
	ferry_length = l * 100
	for _ in range(m):
		line = input().split()
		length = int(line[0])
		side = line[1]
		if side == "left":
			left.append(length)
		else:
			right.append(length)
	result = 0
	side = "left"
	while len(left) > 0 or len(right) > 0:
		result += 1
		if side == "left":
			side = "right"
			load_ferry(left, ferry_length)
		else:
			side = "left"
			load_ferry(right, ferry_length)
	print(result)


if __name__ == "__main__":
	tc = int(input())
	for _ in range(tc):
		test_case()
