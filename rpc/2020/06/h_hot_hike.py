if __name__ == "__main__":
	n = int(input())
	temps = [int(x) for x in input().split()]
	best = 0
	for i in range(1, n - 2):
		max1 = max(temps[i], temps[i + 2])
		max2 = max(temps[best], temps[best + 2])
		if max1 < max2:
			best = i
	print(best + 1, max(temps[best], temps[best + 2]))
