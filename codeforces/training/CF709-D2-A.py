# Juicer
# https://codeforces.com/contest/709/problem/A
#
# Author: eloyhz
# Date: Aug/26/2020


if __name__ == '__main__':
    n, b, d = [int(x) for x in input().split()]
    a = [int(x) for x in input().split()]
    total = 0
    count = 0
    for x in a:
        if x > b:
            continue
        total += x
        if total > d:
            count += 1
            total = 0
    print(count)


