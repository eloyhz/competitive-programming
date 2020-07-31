# CSES - Two Sets
# https://cses.fi/problemset/task/1092

if __name__ == "__main__":
	n = int(input())
	s = n * (n + 1) // 2
	if s % 2 != 0:
		print("NO")
	else:
		s1 = set()
		s2 = set()
		num = s // 2
		x = n
		while True:
			num -= x
			if num > 1:
				s1.add(x)
			else:
				break
			x -= 1
		print(num)
		for i in range(abs(num) - 1, 0, -1):
			s1.add(i)
		for i in range(2, n + 1):
			if i not in s1:
				s2.add(i)
		print("YES")
		print(sum(s1), s1)
		print(sum(s2), s2)

