# Kattis - A Different Problem
# https://open.kattis.com/problems/different

from sys import stdin

if __name__ == '__main__':
	for line in stdin:
		a, b = [int(x) for x in line.split()]
		print(abs(a - b))

		
