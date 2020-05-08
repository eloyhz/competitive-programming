# UVa 11340 - Newspaper
# https://onlinejudge.org/external/113/11340.pdf

if __name__ == "__main__":
	n = int(input())
	for _ in range(n):
		k = int(input())
		paid = {}
		for _ in range(k):
			line = input().split()
			char = str(line[0])
			value = int(line[1])
			paid[char] = value
		m = int(input())
		result = 0
		for _ in range(m):
			line = input()
			for c in line:
				if c in paid:
					result += paid[c]
		dollars = result // 100
		cents = result % 100
		print(dollars, ".", sep="", end="")
		if cents < 10:
			print("0", end="")
		print(cents, "$", sep="")

