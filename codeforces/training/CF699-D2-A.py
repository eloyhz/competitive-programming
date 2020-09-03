# https://codeforces.com/contest/699/problem/A
# Codeforces - Launch of Collider
# https://codeforces.com/contest/699/problem/A
#
# Author: eloyhz
# Date: Sep/03/2020
#


if __name__ == '__main__':
    n = int(input())
    d = input()
    a = [int(x) for x in input().split()]
    min_t = 10 ** 10
    i = 0
    while i < n:
        i = d.find('R', i)
        if i == -1:
            break
        while i + 1 < n and d[i + 1] == 'R':
            i += 1
        if i == n:
            break
        j = d.find('L', i + 1)
        if j == -1:
            break
        min_t = min(min_t, a[j] - a[i])
        i = j + 1
    if min_t == 10 ** 10:
        print(-1)
    else:
        print(min_t // 2)
