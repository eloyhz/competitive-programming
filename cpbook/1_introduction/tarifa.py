# Kattis - Tarifa
# https://open.kattis.com/problems/tarifa

if __name__ == "__main__":
	x = int(input())
	n = int(input())
	s = 0
	for _ in range(n):
		p = int(input())
		s += x - p
	print(x + s)

