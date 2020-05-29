# UVa 729 - The Hamming Distance Problem
# https://onlinejudge.org/external/7/729.pdf


def test_case(n, h):
	for i in range(1 << n):
		bits = 0
		for j in range(n):
			if i & (1 << j):
				bits += 1
		if bits == h:
#			print(bin(i).replace("0b",""))
			print(format(i, '0' + str(n) + 'b'))


if __name__ == "__main__":
	tc = int(input())
	input()
	for t in range(tc, 0, -1):
		n, h = [int(x) for x in input().split()]
		test_case(n, h)
		if t > 1:
			input()
			print()

