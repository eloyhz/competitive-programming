# UVa 00437 - The Tower of Babylon
# https://onlinejudge.org/external/4/437.pdf


def maximum_height(n, dimensions):
	array = []
	for d in dimensions:
		array.append((d[0], d[1], d[2]))
		array.append((d[0], d[2], d[1]))
		array.append((d[1], d[2], d[0]))
		array.append((d[1], d[0], d[2]))
		array.append((d[2], d[0], d[1]))
		array.append((d[2], d[1], d[0]))
	array.sort()
	m = len(array)
	length = [0] * m
	max_height = 0
	for i in range(m):
		length[i] = array[i][2]
		for j in range(i):
			if array[j][0] < array[i][0] and array[j][1] < array[i][1] and \
			length[j] + array[i][2] > length[i]:
				length[i] = length[j] + array[i][2]
		max_height = max(max_height, length[i])
	return max_height


if __name__ == "__main__":
	case = 0
	n = int(input())
	while n > 0:
		dimensions = []
		for _ in range(n):
			dimensions.append([int(x) for x in input().split()])
		height = maximum_height(n, dimensions)
		case += 1
		print(f"Case {case}: maximum height = {height}")
		n = int(input())
