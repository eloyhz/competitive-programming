# Kattis - Quality-Adjusted Life-Year
# https://open.kattis.com/problems/qaly
# Date: 2021-06-21


n = int(input())
result = 0
while n > 0:
    n -= 1
    line = input().split()
    q = float(line[0])
    y = float(line[1])
    result += q * y
print(f"{result:.3f}")

