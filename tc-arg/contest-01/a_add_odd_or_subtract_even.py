# Add Odd or Subtract Even
# https://codeforces.com/group/j1UosVRZar/contest/287327/problem/A

def add_odd_or_subtract_even(a, b):
	counter = 0
	while a != b:
		if a < b:
			diff = b - a
			if diff % 2 != 0:
				counter += 1
				a += diff
			else:
				counter += 2
				a += diff
		else:
			diff = a - b
			if diff % 2 == 0:
				counter += 1
				b += diff
			else:
				counter += 2
				b += diff
	return counter


if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		a, b = [int(x) for x in input().split()]
		print(add_odd_or_subtract_even(a, b))

