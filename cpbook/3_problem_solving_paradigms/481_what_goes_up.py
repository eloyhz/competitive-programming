# UVa 481 - What Goes Up
# https://onlinejudge.org/external/4/481.pdf

from sys import stdin


def lis(sequence):
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



if __name__ == "__main__":
	sequence = []
	for line in stdin:
		sequence.append(int(line))
	lis(sequence)


