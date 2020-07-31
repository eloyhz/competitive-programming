n = int(input())
nums = [[] for _ in range(9)]
for _ in range(n):
	num = list(input())
	num.sort(reverse=True)
	nums[ord(num[0]) - ord('0') - 1].append(num)
for i in range(9):
	nums[i].sort()
result = ''
for i in range(8, -1, -1):
	if nums[i]:
		for num in nums[i]:
			result += ''.join(num)
print(result)

