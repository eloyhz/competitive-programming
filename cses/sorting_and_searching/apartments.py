n, m, k = [int(x) for x in input().split(" ")]
a = [int(x) for x in input().split(" ")]
b = [int(x) for x in input().split(" ")]
a.sort()
b.sort()
ans, i, j = 0, 0 , 0
while i < n and j < m:
    x = a[i]
    if x - k <= b[j] <= x + k:
        ans += 1
        i += 1
        j += 1
    elif x < b[j]:
        i += 1
    elif x > b[j]:
        j += 1
print(ans)
