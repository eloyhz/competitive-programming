# Kattis - One Chicken Per Person!
# https://open.kattis.com/problems/onechicken
# Date: 2021-07-01


n, m = input().split()
n = int(n)
m = int(m)
if abs(n - m) == 1:
    if n < m:
        print(f"Dr. Chaz will have {m - n} piece of chicken left over!")
    else:
        print(f"Dr. Chaz needs {n - m} more piece of chicken!")
else:
    if n < m:
        print(f"Dr. Chaz will have {m - n} pieces of chicken left over!")
    else:
        print(f"Dr. Chaz needs {n - m} more pieces of chicken!")
