from bisect import bisect

# O(n^2) time | O(n) space
def longest_increasing_subsequence_n2(array):
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


# O(nlgn) time | O(n) space
def longest_increasing_subsequence_nlgn(array):
	n = len(array)
	sequences = [None] * n
	indices = [None] * (n + 1)
	length = 0
	for i, num in enumerate(array):
		j = binary_search(1, length, num, indices, array)
		sequences[i] = indices[j - 1]
		indices[j] = i
		length = max(length, j)
	return build_sequence(array, sequences, indices[length])
	
def binary_search(left, right, num, indices, array):
	while left <= right:
		mid = (left + right) // 2
		if array[indices[mid]] < num:
			left = mid + 1
		else:
			right = mid - 1
	return left

def build_sequence(array, sequences, last):
	sequence = []
	p = last
	while p is not None:
		sequence.append(array[p])
		p = sequences[p]
	return list(reversed(sequence))


# O(nlgn) time | O(n) space
def longest_increasing_subsequence_nlgn_custom(array):
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
	return lis


if __name__ == "__main__":
#	array = [-7, 10, 9, 2, 3, 8, 8, 1]
#	array = [-7, 10, 9, 2, 3, 8, 8, 1, 2, 3, 4]
	array = [5, 7, -24, 12, 10, 2, 3, 12, 5, 6, 35]
	print(longest_increasing_subsequence_n2(array))
	print(longest_increasing_subsequence_nlgn(array))
	print(longest_increasing_subsequence_nlgn_custom(array))
	
