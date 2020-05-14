# G. Special Permutation
# https://codeforces.com/contest/1352/problem/G

def version1():
	t = int(input())
	for _ in range(t):
		n = int(input())
		if n < 4:
			print(-1)
		else:
			if n % 2 == 0:
				p = n - 1
			else:
				p = n
			result = ""
			for i in range(p, 0, -2):
				result += str(i) + " "
			result += "4 2 "
			if n % 2 == 0:
				p = n
			else:
				p = n - 1
			for i in range(6, p + 1, 2):
				result += str(i) + " "
			print(result)


def version2():
	t = int(input())
	for _ in range(t):
		n = int(input())
		if n < 4:
			print(-1)
			continue
		for i in range(n, 0, -1):
			if i & 1:
				print(i, "", end="")
		print("4 2 ", end="")
		for i in range(6, n + 1, 2):
			print(i, "", end="")
		print()


if __name__ == "__main__":
	version2()
