# UVA 11572 - Unique Snowflakes
# https://onlinejudge.org/external/115/11572.pdf

if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		n = int(input())
		m = {}
		u = True
		for _ in range(n):
			s = int(input())
			if s in m:
				u = False
			elif u:
				m[s] = 1
		print(len(m))
