# ITMO Academy - Disjoint Sets Union
# 1.A. Disjoint Sets Union [AC]
# https://codeforces.com/edu/course/2/lesson/7/1/practice/contest/289390/problem/A
#
# Author: eloyhz
# Date: 28/oct/2020

p = []
r = []


def find(a):
    global p
    if p[a] != a:
        p[a] = find(p[a])
    return p[a]


def union(a, b):
    global p, r
    a = find(a)
    b = find(b)
    if r[a] == r[b]:
        r[a] += 1
    if r[a] > r[b]:
        p[b] = a
    else:
        p[a] = b


if __name__ == '__main__':
    n, m = [int(x) for x in input().split()]
    p = [x for x in range(n + 1)]
    r = [1] * (n + 1)
    for _ in range(m):
        q, u, v = input().split()
        u = int(u)
        v = int(v)
        if q == 'union':
            union(u, v)
        elif q == 'get':
            print('YES' if find(u) == find(v) else 'NO')

