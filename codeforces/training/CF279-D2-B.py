# Codeforces - Books
# https://codeforces.com/contest/279/problem/B
#
# Author: eloyhz
# Date: Oct/22/2021
#

n, t = [int(x) for x in input().split()]
a = [int(x) for x in input().split()]
left, right = 0, 0
ans = 0
s = 0
while right < n:
    s += a[right]
    while s > t and left < right:
        s -= a[left]
        left += 1
    if s <= t:
        ans = max(ans, right - left + 1)
    right += 1
print(ans)
