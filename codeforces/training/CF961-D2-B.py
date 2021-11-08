# Codeforces - Lecture Sleep
# https://codeforces.com/problemset/problem/961/B
# 08/11/21

n, k = [int(x) for x in input().split()]
a = [int(x) for x in input().split()]
t = [int(x) for x in input().split()]

p = [0] * n
r = 0
for i in range(n):
    r += a[i] * t[i]
    p[i] = r

s = [0] * n
r = 0
for i in range(n - 1, -1, -1):
    r += a[i] * t[i]
    s[i] = r

pref = [0] * n
r = 0
for i in range(n):
    r += a[i]
    pref[i] = r

ans = 0
for i in range(n - k + 1):
    cur = 0
    if i > 0:
        cur += p[i - 1]
    if i + k < n:
        cur += s[i + k]
    pref_sum = pref[i + k - 1]
    if i > 0:
        pref_sum -= pref[i - 1]
    cur += pref_sum
    ans = max(ans, cur)

print(ans)


