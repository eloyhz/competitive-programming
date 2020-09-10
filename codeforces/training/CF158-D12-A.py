# Codeforces - Next Round
# https://codeforces.com/contest/158/problem/A
#
# Author: eloyhz
# Date: Sep/10/2020
#


if __name__ == '__main__':
    n, k = [int(x) for x in input().split()]
    a = [int(x) for x in input().split()]
    count = 0
    for i in range(n):
        if a[i] > 0 and a[i] >= a[k - 1]:
            count += 1
    print(count)
