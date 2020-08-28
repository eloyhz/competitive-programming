# ITMO Academy - Binary Search for Answer
# 2.C. Very Easy Task
# https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C

def is_good(t, n, x, y):
    if x < y:
        return (t // x + (t - x) // y ) >= n
    else:
        return ((t - y) // x + t // y ) >= n
    
if __name__ == '__main__':
    n, x, y = [int(x) for x in input().split()]
    l = 0       # l is bad
    r = 10 ** 10  # r is good
    while r > l + 1:
        m = (l + r) // 2
        if is_good(m, n, x, y):
            r = m
        else:
            l = m
    print(r)
