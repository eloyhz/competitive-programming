# Kattis - Judging Moose
# https://open.kattis.com/problems/judgingmoose
# Date: 2021-06-21


line = input().split()
left = int(line[0])
right = int(line[1])
if left == right == 0:
    print("Not a moose")
elif left == right:
    print(f"Even {left + right}")
else:
    print(f"Odd {max(left, right) * 2}")
