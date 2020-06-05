# UVa 11235 - Frequent values
# https://onlinejudge.org/external/112/11235.pdf

def test_case(n, q):
	a = [int(x) for x in input().split()]
	qi = 0
	while qi < q:
		line = input()
		if line == "":
			continue
		qi += 1
		i, j = [int(x) - 1 for x in line.split()]
		t = {}
		most_freq = 0
		for r in range(i, j + 1):
			if a[r] not in t:
				t[a[r]] = 1
			else:
				t[a[r]] += 1
			most_freq = max(most_freq, t[a[r]])
		print(most_freq)

if __name__ == "__main__":
	while True:
		line = input()
		if line == "":
			continue
		if len(line) == 1 and line[0] == '0':
			break
		n, q = [int(x) for x in line.split()]
		test_case(n, q)
