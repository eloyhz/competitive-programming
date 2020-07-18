# Codeforces Round #656 (Div. 3) - 2020-07-17
# C. Make It Good
# https://codeforces.com/contest/1385/problem/C

from collections import deque

def is_good(array):
	dq = deque(array)
	tmp = []
	while dq:
		if dq[0] <= dq[-1]:
			tmp.append(dq.popleft())
		else:
			tmp.append(dq.pop())
	return is_non_decreasing(tmp)

def is_non_decreasing(array):
	for i in range(len(array) - 1):
		if array[i] > array[i + 1]:
			return False
	return True

def make_it_good_wa(array):
	prefix = 0
	n = len(array)
	if n > 2:
		for i in range(1, n - 1):
			if array[i] < array[i - 1] and array[i] < array[i + 1]:
				prefix = i
	else:
		dq = deque(array)
		while not is_good(dq):
			dq.popleft()
			prefix += 1
	return prefix
	
# From editorial https://codeforces.com/blog/entry/80257
def make_it_good(array):
	p = len(array) - 1
	while p > 0 and a[p - 1] >= a[p]:
		p -= 1
	while p > 0 and a[p - 1] <= a[p]:
		p -= 1
	return p
		
if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		n = int(input())
		a = [int(x) for x in input().split()]
		shortest_prefix = make_it_good(a)
		print(shortest_prefix)

