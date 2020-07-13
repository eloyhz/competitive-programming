# TCArg 2020 - Contest #1
# Array with Odd Sum
# https://codeforces.com/group/j1UosVRZar/contest/287327/problem/I

def array_with_odd_sum(a):
	if sum(a) % 2 != 0:
		return True
	has_even = has_odd = False
	for num in a:
		if num % 2 == 0:
			has_even = True
		elif num % 2 != 0:
			has_odd = True
	return True if has_even and has_odd else False

if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		n = int(input())
		a = [int(x) for x in input().split()]
		if array_with_odd_sum(a):
			print("YES")
		else:
			print("NO")

