# UVa 514 - Rails
# https://onlinejudge.org/external/5/514.pdf

def test_case(n):
	while True:
		b = [int(x) for x in input().split()]
		if len(b) == 1 and b[0] == 0:
			break
		stack = []
		k = 0
		for i in range(1, n + 1):
			stack.append(i)
			while len(stack) > 0 and k < n and b[k] == stack[-1]:
				stack.pop()
				k += 1
		for i in range(k, n):
			if b[i] == stack[-1]:
				stack.pop()
		print("Yes" if len(stack) == 0 else "No")


if __name__ == "__main__":
	while True:
		n = int(input())
		if n == 0:
			break
		test_case(n)
		print()
