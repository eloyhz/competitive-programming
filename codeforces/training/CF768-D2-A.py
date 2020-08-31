# Codeforces - Oath of the Night's Watch
# https://codeforces.com/contest/768/problem/A
#
# Author: eloyhz
# Date: Aug/31/2020

def my_solution(n, a):
    if n <= 2:
        return 0
    else:
        a.sort()
        p = a[0]
        b = [[p, 1]]
        for i in range(1, n):
            if a[i] == p:
                b[-1][1] += 1
            else:
                p = a[i]
                b.append([p, 1])
        st = 0
        for i in range(1, len(b) - 1):
            if b[i - 1][0] < b[i][0] < b[i + 1][0]:
                st += b[i][1]
        return st


def editorial(a):
    min_elem = min(a)
    max_elem = max(a)
    st = 0
    for x in a:
        if min_elem < x < max_elem:
            st += 1
    return st


if __name__ == '__main__':
    n = int(input())
    a = [int(x) for x in input().split()]
    print(editorial(a))
