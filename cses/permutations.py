# CSES - Permutations
# https://cses.fi/problemset/task/1070

if __name__ == "__main__":
	n = int(input())
	if n == 2 or n == 3:
		print("NO SOLUTION")
	else:
		if n % 2 == 0:
			even = n
			odd = n - 1
		else:
			odd = n
			even = n - 1
		for i in range(odd, 0, -2):
			print(i, '', end='')
		for i in range(even, 1, -2):
			print(i, '', end='')
		print()

	
