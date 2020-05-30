# UVa 729 - The Hamming Distance Problem
# https://onlinejudge.org/external/7/729.pdf

bits = []

def backtrack(n, h, k):
	if len(bits) == n:
		if bits.count(1) == h:
			print(''.join([str(b) for b in bits]))
		return
	bits.append(0)
	backtrack(n, h, k + 1)
	bits.pop()
	bits.append(1)
	backtrack(n, h, k + 1)
	bits.pop()


# Using backtracking: 1.350 secs (48% faster)
def test_case_backtrack(n, h):
	backtrack(n, h, 0)


# Using bit manipulation: 2.790 secs
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
		test_case_backtrack(n, h)
		if t > 1:
			input()
			print()

