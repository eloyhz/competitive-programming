# UVa 256 - Quirksome Squares
# https://onlinejudge.org/external/2/256.pdf

if __name__ == "__main__":
	while True:
		try:
			n = int(input())
		except EOFError:
			break
		h = n // 2
		m = 10 ** h
		for i in range(m):
			for j in range(m):
				num = (i + j) ** 2
				quirk = int(f"{i:0{h}}{j:0{h}}")
				if num == quirk:
					print(f"{num:0{n}d}")

