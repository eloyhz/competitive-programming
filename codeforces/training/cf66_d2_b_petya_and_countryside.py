#
# Author: eloyhz
# Date: Sep/11/2020
#
# Codeforces (CF66-D2-B) - Petya and Countryside
# https://codeforces.com/contest/66/problem/B

def left_neighbours(i, a):
    n = len(a)
    count = 0
    while i > 0 and a[i - 1] <= a[i]:
        i -= 1
        count += 1
    return count


def right_neighbours(i, a):
    n = len(a)
    count = 0
    while i < n - 1 and a[i] >= a[i + 1]:
        i += 1
        count += 1
    return count


if __name__ == '__main__':
    n = int(input())
    a = [int(x) for x in input().split()]
    max_section = 0
    for i in range(n):
        cur_section = left_neighbours(i, a) + right_neighbours(i, a) + 1
        max_section = max(max_section, cur_section)
    print(max_section)
