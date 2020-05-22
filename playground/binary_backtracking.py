# Generate binary numbers using backtracking

import time

n = 8
numbers = []
number = 0


def generate_list(k, i, o):
	global numbers, n
	if o > i or i > n // 2: return
	if k == n:
		print(numbers, numbers.count(0), numbers.count(1))
	else:
		numbers.append(0)
		generate_list(k + 1, i, o + 1)
		numbers.pop()
		numbers.append(1)
		generate_list(k + 1, i + 1, o)
		numbers.pop()


def generate_bits(k, i, o):
	global number, n
	# if o > i or i > n // 2: return
	if k == n:
		return
		for i in range(n):
			print("1" if number & (1 << i) else "0", sep="", end="")
		print()
	else:
		generate_bits(k + 1, i, o + 1)
		number |= (1 << k)
		generate_bits(k + 1, i + 1, o)
		number &= ~(1 << k)


if __name__ == "__main__":
	start_time = time.time()
	generate_list(0, 0, 0)
	print("--- %s seconds ---" % (time.time() - start_time))

	start_time = time.time()
	generate_bits(0, 0, 0)
	print("--- %s seconds ---" % (time.time() - start_time))
