# ITMO Academy - Binary Search for Answer
# 2.B. Ropes
# https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B

def is_good(x, a, k):
    s = 0
    for ai in a:
        s += ai // x
    return s >= k


if __name__ == '__main__':
    n, k = [int(x) for x in input().split()]
    a = [0] * n
    for i in range(n):
        a[i] = int(input())
    l = 0
    r = 10 ** 8
    for _ in range(100):
        m = (l + r) / 2
        if is_good(m, a, k):
            l = m
        else:
            r = m
    print(l)

