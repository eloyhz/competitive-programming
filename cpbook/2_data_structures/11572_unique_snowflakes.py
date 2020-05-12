# UVA 11572 - Unique Snowflakes
# https://onlinejudge.org/external/115/11572.pdf

if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		n = int(input())
		m = {}
		r = 0
		for i in range(n):
			s = int(input())
			if s in m:
				r = max(r, len(m))
				d = [k for k in m if m[k] <= m[s]]
				for k in d:
					del m[k]
			m[s] = i
			# print(i, s, m)
		r = max(r, len(m))
		print(r)
