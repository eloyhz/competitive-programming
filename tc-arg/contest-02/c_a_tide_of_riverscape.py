# TCArg 2020 - Contest #2
# A Tide of Riverscape
# https://codeforces.com/group/j1UosVRZar/contest/287504/problem/C

if __name__ == "__main__":
	n, p = [int(x) for x in input().split()]
	s = list(input())
	is_period = True
	for i in range(n - p):
		if s[i] != s[i + p]:
			is_period = False
			break
	if is_period:
		print("No")
	else:
		for i in range(n):
			if s[i] != '.':
				continue
			if i < n - p:
				s[i] = '0' if s[i + p] == '1' else '1'
			else:
				s[i] = '0'
		print(''.join(s))	
