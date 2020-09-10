# Codeforces - Bit++
# https://codeforces.com/contest/556/problem/A
#
# Author: eloyhz
# Date: Sep/10/2020
#


if __name__ == '__main__':
    n = int(input())
    s = input()
    while s and (s.find('01') >= 0 or s.find('10') >= 0):
        s = s.replace('01', '')
        s = s.replace('10', '')
    print(len(s))
