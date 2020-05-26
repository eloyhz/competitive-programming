# UVa 11933 - Splitting Numbers
# https://onlinejudge.org/external/119/11933.pdf


def test_case(n):
	bits = []
	bit = 0
	num = n
	while num > 0:
		if num & 1:
			bits.append(bit)
		bit += 1
		num >>= 1
	a = b = 0
	for i in range(0, len(bits), 2):
		a |= 1 << bits[i]
	for i in range(1, len(bits), 2):
		b |= 1 << bits[i]
	print(a, b)



if __name__ == "__main__":
	while True:
		n = int(input())
		if n == 0:
			break
		test_case(n)

