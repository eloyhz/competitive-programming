# Free Ice Cream
# https://codeforces.com/contest/686/problem/A
#
# Author: eloyhz
# Date: Aug/26/2020


if __name__ == '__main__':
    n, x = [int(x) for x in input().split()]
    dist = 0
    for _ in range(n):
        line = input().split()
        d = int(line[1])
        if line[0] == '+':
            x += d
        elif d <= x:
            x -= d
        else:
            dist += 1
    print(x, dist)
