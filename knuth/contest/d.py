from math import sqrt

n = int(input())
result = 0
m = 10 ** 9 + 7
for k in range(1, n + 1):
	result += round(sqrt(k)) % m
print(result)
