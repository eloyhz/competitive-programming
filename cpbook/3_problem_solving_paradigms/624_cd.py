# UVa 00624 - CD
# https://onlinejudge.org/external/6/624.pdf

tracks = []
subset = []
result = []
best = 0
m = n = 0

def search(k):
	global subset, tracks, n, m, result, best
	if k == n:
		s = 0
		r = []
		for i in range(len(subset)):
			s += tracks[subset[i]]
			r.append(tracks[subset[i]])
		if s <= m and s >= best:
			best = s
			result = r[:]
	else:
		search(k + 1)
		subset.append(k)
		search(k + 1)
		subset.pop()



def test_case(line):
	global tracks, n, m, result, best
	info = [int(x) for x in line.split()]
	m = info[0]
	n = info[1]
	tracks = info[2:]
	result = []
	best = 0
	search(0)
	for r in result:
		print(r, "", end="")
	print("sum:", sum(result), sep="")


if __name__ == "__main__":
	while True:
		try:
			line = input()
		except EOFError:
			break
		if line == "":
			break
		test_case(line)

