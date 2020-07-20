# TCArg 2020 - Contest #5
# Game 23
# https://codeforces.com/group/j1UosVRZar/contest/288184/problem/G

counter = 0

def can_transform(n, m):
	global counter
	if n == m:
		return True
	elif n > m:
		return False
	else:
		counter += 1
		if m % 3 == 0 and can_transform(n, m // 3):
			return True
		if m % 2 == 0 and can_transform(n, m // 2):
			return True
		counter -= 1
		return False


if __name__ == "__main__":
	n, m = [int(x) for x in input().split()]
	if can_transform(n, m):
		print(counter)
	else:
		print(-1)
		
