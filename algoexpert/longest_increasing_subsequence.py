from bisect import bisect

def longestIncreasingSubsequence(array):
	n = len(array)
	lis = [0] * n
	prev = [0] * n
	longest = 0
	for i in range(n):
		lis[i] = 1
		prev[i] = -1
		for j in range(i):
			if array[j] < array[i] and lis[j] + 1 >= lis[i]:
				lis[i] = lis[j] + 1
				prev[i] = j
		if lis[i] >= lis[longest]:
			longest = i
	stack = []
	i = longest
	while i != -1:
		stack.append(array[i])
		i = prev[i]
	result = []
	while len(stack) > 0:
		result.append(stack.pop())
	return result


if __name__ == "__main__":
#	array = [-7, 10, 9, 2, 3, 8, 8, 1]
	array = [-7, 10, 9, 2, 3, 8, 8, 1, 2, 3, 4]
# 	array = [5, 7, -24, 12, 10, 2, 3, 12, 5, 6, 35]
	n = len(array)
	L = [array[0]]
	indices = [0]
	prev = [None] * n
	for i in range(1, n):
		num = array[i]
		j = bisect(L, num)
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
	lis = []
	while len(stack) > 0:
		lis.append(stack.pop())
	print(lis)

