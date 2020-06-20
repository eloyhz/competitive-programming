# UVa 481 - What Goes Up
# https://onlinejudge.org/external/4/481.pdf

from sys import stdin
from bisect import bisect_left


def lis_tle(sequence):
	n = len(sequence)
	prev = [0] * n
	length = [0] * n
	longest = 0
	for k in range(n):
		length[k] = 1
		prev[k] = -1
		for i in range(k):
			if sequence[i] < sequence[k]:
				if length[i] + 1 >= length[k]:
					length[k] = length[i] + 1
					prev[k] = i
		if length[k] >= length[longest]:
			longest = k
	stack = []
	i = longest
	while i != -1:
		stack.append(sequence[i])
		i = prev[i]
	print(length[longest])
	print("-")
	while len(stack) > 0:
		print(stack.pop())


def lis(array):
	n = len(array)
	L = [array[0]]
	indices = [0]
	prev = [None] * n
	for i in range(1, n):
		num = array[i]
		j = bisect_left(L, num)
		if j < len(L):
			L[j] = num
			indices[j] = i
		elif num != L[-1]:
			L.append(num)
			indices.append(i)
		if j > 0:
			prev[i] = indices[j - 1]
	stack = []
	p = indices[-1]
	while p != None:
		stack.append(array[p])
		p = prev[p]
	print(len(stack))
	print("-")
	while len(stack) > 0:
		print(stack.pop())


if __name__ == "__main__":
	sequence = []
	for line in stdin:
		sequence.append(int(line))
	lis(sequence)


