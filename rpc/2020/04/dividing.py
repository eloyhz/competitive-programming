# Problem D. Dividing by Two

if __name__ == "__main__":
	a, b = [int(x) for x in input().split()]
	counter = 0
	while a != b:
		counter += 1
		if a < b:
			diff = b - a
			a += diff
			counter += diff - 1
		elif a % 2 == 0:
			a //= 2
		else:
			a += 1
	print(counter)
