# UVa 11286 - Conformity
# https://onlinejudge.org/external/112/11286.pdf

if __name__ == "__main__":
	while True:
		n = int(input())
		if n == 0:
			break
		m = {}
		p = 1
		for _ in range(n):
			c = [x for x in input().split()]
			c.sort()
			c = ''.join(c)
			if c in m:
				m[c] += 1
				p = max(p, m[c])
			else:
				m[c] = 1
		r = 0
		for k in m:
			if m[k] == p:
				r += m[k]
		print(r)
