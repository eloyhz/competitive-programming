# UVa 10382 - Watering Grass
# https://onlinejudge.org/external/103/10382.pdf

import math

def calculate_minimum_sprinklers(n, l, w, sprinklers):
	intervals = []
	for s in sprinklers:
		dx = math.sqrt(s[1] ** 2 - (w / 2) ** 2)
		intervals.append((s[0] - dx, s[0] + dx, s[0], s[1]))
	# print(sprinklers)
	intervals.sort()
	# for c, i in enumerate(intervals):
	# 	print(f"{chr(c + ord('A'))}: ({i[2]}, {i[3]}) ==> [{i[0]:.3f}..{i[1]:.3f}]")
	result = 0
	rightmost = 0
	i = -1
	while i < n - 1:
		j = i + 1
		if intervals[j][0] > rightmost:
			return -1
		right = rightmost
		while j < n:
			if intervals[j][0] <= rightmost:
				right = max(right, intervals[j][1])
				i += 1
			j += 1
		rightmost = right
		result += 1
		if rightmost >= l:
			return result
	return result if rightmost >= l else -1

if __name__ == "__main__":
	while True:
		try:
			line = input()
			if line == "":
				continue
		except EOFError:
			break
		n, l, w = [int(x) for x in line.split()]
		sprinklers = []
		for _ in range(n):
			p, r = [int(x) for x in input().split()]
			if r >= w / 2:
				sprinklers.append((p, r))
		minimum_sprinklers = calculate_minimum_sprinklers(len(sprinklers), l, w, sprinklers)
		print(minimum_sprinklers)
