# TCArg 2020 - Contest #5
# Game 23
# https://codeforces.com/group/j1UosVRZar/contest/288184/problem/G

if __name__ == "__main__":
	n, m = [int(x) for x in input().split()]
	if n == m:
		print(0)
	elif n > m:
		print(-1)
	else:
		counter = 0
		while m > n:
			if m % 3 == 0:
				m //= 3
			elif m % 2 == 0:
				m //= 2
			else:
				counter = -1
				break
			counter += 1
		print(counter if n == m else -1)
