# Codeforces - Translation 
# https://codeforces.com/contest/41/problem/A
#
# Author: eloyhz
# Date: Sep/10/2020
#


if __name__ == '__main__':
    s = input()
    t = list(input())
    t.reverse()
    r = ''.join(t)
    if s == r:
        print('YES')
    else:
        print('NO')
