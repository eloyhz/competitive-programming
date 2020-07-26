m = int(input())
forbidden = []
for _ in range(m):
	s = input()
	forbidden.append(s)
n = int(input())
count = 0
num = 0
while count < n:
	num += 1
	nums = str(num)
	found = False
	for f in forbidden:
		if nums.find(f) >= 0:
			found = True
	if not found:
		count += 1
print(num)
	
