# UVa 454 - Anagrams
# https://onlinejudge.org/external/4/454.pdf

if __name__ == "__main__":
	total = int(input())
	input()
	for t in range(total, 0, -1):
		v = []
		m = {}
		c = 0
		while True:
			try:
				s = input()
			except EOFError:
				break
			if s == "":
				break
			v.append(s)
			s = ''.join(sorted(s)).strip()
			if s not in m:
				m[s] = [c]
			else:
				m[s].append(c)
			c += 1
		r = []
		for k in m:
			n = len(m[k])
			if n == 1:
				continue
			for i in range(n):
				for j in range(i + 1, n):
					vi = v[m[k][i]]
					vj = v[m[k][j]]
					if vi < vj:
						r.append(vi + " = " + vj)
					else:
						r.append(vj + " = " + vi)
		for u in sorted(r):
			print(u)
		if t > 1:
			print()


