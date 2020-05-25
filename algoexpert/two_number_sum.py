# Two Number Sum

# O(n^2) time
# O(1) space
def twoNumberSum_1(array, targetSum):
	n = len(array)
	for i in range(n - 1):
		for j in range(i + 1, n):
			if array[i] + array[j] == targetSum:
				return [array[i], array[j]]
	return []


# O(n) time
# O(n) space
def twoNumberSum_2(array, targetSum):
	table = {}
	for num in array:
		table[num] = num
	for x in array:
		y = targetSum - x
		if y in table and y != table[x]:
			return [x, y]
	return []


# O(n log n) time
# O(1) space
def twoNumberSum_3(array, targetSum):
	array.sort()
	left, right = 0, len(array) - 1
	while left < right:
		current_sum = array[left] + array[right]
		if current_sum == targetSum:
			return [array[left], array[right]]
		elif current_sum > targetSum:
			right -= 1
		else: 
			left += 1
	return []


