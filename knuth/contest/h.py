def selection_sort(a):
	n = len(a)
	counter = 0
	for i in range(n - 1):
		s = i
		for j in range(i + 1, n):
			if a[j] < a[s]:
				s = j
				counter += 1
		m = a[s]
		a[s] = a[i]
		a[i] = m
	return counter


def is_sorted(p):
	for i in range(len(p) - 1):
		if p[i] > p[i + 1]:
			return False
	return True

if __name__ == "__main__":
	t = int(input())
	for _ in range(t):
		n, k = [int(x) for x in input().split()]
		p = [int(x) for x in input().split()]
		if k == 0 and is_sorted(p):
			print("Yes")
		else:
			swaps = selection_sort(p)
			if swaps <= k:
				print("Yes")
			else:
				print("No")

