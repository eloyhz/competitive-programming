# Vanya and Fence
# https://codeforces.com/contest/677/problem/A

if __name__ == '__main__':
	n, h = [int(x) for x in input().split()]
	a = [int(x) for x in input().split()]
	count = 0
	for x in a:
		if x > h:
			count += 1
	print(len(a) + count)
	
