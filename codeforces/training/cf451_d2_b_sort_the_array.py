#
# Author: eloyhz
# Date: Sep/15/2020
#
# Codeforces (CF451-D2-B) - Sort the Array
# https://codeforces.com/contest/451/problem/B
#

def solve(n, a):
    start = None
    for i in range(1, n + 1):
        if a[i][1] != i:
            start = i
            break
    if start is None:
        return (1, 1)
    end = a[start][1]
    for i in range(start, end):
        if a[i][1] - a[i + 1][1] != 1:
            return None
    for i in range(end + 1, n):
        if a[i + 1][1] - a[i][1] != 1:
            return None
    return (a[end][1], a[start][1])


if __name__ == '__main__':
    n = int(input())
    t = [int(x) for x in input().split()]
    a = [(0,0)] * (n + 1)
    for i in range(1, n + 1):
        a[i] = (t[i - 1], i)
    a.sort()
    ans = solve(n, a)
    if ans is None:
        print('no')
    else:
        print('yes')
        print(ans[0], ans[1])
