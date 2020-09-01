# Codeforces - Brain's Photos
# https://codeforces.com/contest/707/problem/A
#
# Author: eloyhz
# Date: Sep/01/2020


if __name__ == '__main__':
    n, m = [int(x) for x in input().split()]
    color = False
    for _ in range(n):
        row = [x for x in input().split()]
        for i in range(m):
            if row[i] == 'C' or row[i] == 'M' or row[i] == 'Y':
                color = True
                break
        if color:
            break
    print('#Color' if color else '#Black&White')
