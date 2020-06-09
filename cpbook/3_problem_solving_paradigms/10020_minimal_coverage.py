# UVa 10020 - Minimal coverage
# https://onlinejudge.org/external/100/10020.pdf


def test_case(m):
	segments = []
	while True:
		l, r = [int(x) for x in input().split()]
		if l == r == 0:
			break
		segments.append((l, r))
	segments.sort()
	result = []
	rightmost = 0
	i, n = -1, len(segments)
	while i < n - 1 and rightmost < m:
		j = i + 1
		if segments[j][0] > rightmost:
			break
		right = rightmost
		best = None
		while j < n:
			if segments[j][0] <= rightmost:
				if segments[j][1] > right:
					right = segments[j][1]
					best = j
				i += 1
			j += 1
		rightmost = right
		if best != None:
			result.append(segments[best])
	if rightmost >= m:
		print(len(result))
		for r in result:
			print(f"{r[0]} {r[1]}")
	else:
		print(0)
	


if __name__ == "__main__":
	tc = int(input())
	input()
	for t in range(tc, 0, -1):
		m = int(input())
		test_case(m)
		if t > 1:
			input()
			print()

