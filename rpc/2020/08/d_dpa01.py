# RPC 08 - DPA Numbers I

def test_case(n):
	div = 1
	for i in range(2, n - 1):
		if n % i == 0:
			div += i
	if div < n:
		print('deficient')
	elif div == n:
		print('perfect')
	else:
		print('abundant')


if __name__ == '__main__':
	t = int(input())
	for _ in range(t):
		n = int(input())
		test_case(n)

