# UVa 12356 - Army buddies
# https://onlinejudge.org/external/123/12356.pdf

if __name__ == "__main__":
	while True:
		s, b = [int(x) for x in input().split()]
		if s == b == 0:
			break
		ls = ['*'] * (s + 1)
		rs = ['*'] * (s + 1)
		for i in range(2, s + 1):
			ls[i] = i - 1
		for i in range(1, s):
			rs[i] = i + 1
		for _ in range(b):
			l, r = [int(x) for x in input().split()]
			a = ls[l]
			b = rs[r]
			if b != '*':
				ls[b] = a
			if a != '*':
				rs[a] = b
			print(a, b)
		print("-")
