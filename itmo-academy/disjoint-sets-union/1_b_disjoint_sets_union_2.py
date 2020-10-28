# ITMO Academy - Disjoint Sets Union
# B. Disjoint Sets Union 2 [TLE]
# https://codeforces.com/edu/course/2/lesson/7/1/practice/contest/289390/problem/B
#
# Author: eloyhz
# Date: 28/oct/2020

p = []
r = []
min_elem = []
max_elem = []
count = []


def find(a):
    global p
    if p[a] != a:
        p[a] = find(p[a])
    return p[a]


def union(a, b):
    global p, r, min_elem, max_elem, count
    a = find(a)
    b = find(b)
    if a == b:
        return False
    if r[a] == r[b]:
        r[a] += 1
    if r[a] > r[b]:
        p[b] = a
        min_elem[a] = min(min_elem[a], min_elem[b])
        max_elem[a] = max(max_elem[a], max_elem[b])
        count[a] += count[b]
    else:
        p[a] = b
        min_elem[b] = min(min_elem[a], min_elem[b])
        max_elem[b] = max(max_elem[a], max_elem[b])
        count[b] += count[a]
    return True


if __name__ == '__main__':
    n, m = [int(x) for x in input().split()]
    p = [x for x in range(n + 1)]
    min_elem = [x for x in range(n + 1)]
    max_elem = [x for x in range(n + 1)]
    r = [1] * (n + 1)
    count = [1] * (n + 1)
    for _ in range(m):
        q = input().split()
        if q[0] == 'union':
            u = int(q[1])
            v = int(q[2])
            union(u, v)
        elif q[0] == 'get':
            u = int(q[1])
            v = find(u)
            print(min_elem[v], max_elem[v], count[v])



