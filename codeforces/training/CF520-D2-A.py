# Codeforces - Pangram
# https://codeforces.com/contest/520/problem/A
#
# Author: eloyhz
# Date: Aug/31/2020

if __name__ == '__main__':
    n = int(input())
    s = input()
    t = set(s.lower())
    if len(t) == 26:
        print('YES')
    else:
        print('NO')

