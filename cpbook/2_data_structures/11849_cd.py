# UVa 11849 - CD
# https://onlinejudge.org/external/118/11849.pdf


def test_case(n, m):
	jack = set()
	jill = set()
	for _ in range(n):
		jack.add(int(input()))
	for _ in range(m):
		jill.add(int(input()))
	both = jack & jill
	print(len(both))

	
if __name__ == "__main__":
	while True:
		n, m = [int(x) for x in input().split()]
		if n == m == 0:
			break
		test_case(n, m)

