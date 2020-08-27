# ITMO Academy - Binary Search for Answer
# 2.A. Packing Rectangles
# https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A

def is_good(x, w, h, n):
    return (x // w) * (x // h) >= n

if __name__ == '__main__':
    w, h, n = [int(x) for x in input().split()]
    l = 0
    r = 1
    while not is_good(r, w, h, n):
        r *= 2
    while r > l + 1:
        m = (l + r) // 2
        if is_good(m, w, h, n):
            r = m
        else:
            l = m
    print(r)
