# Codeforces - BowWow and the Timetable
# https://codeforces.com/contest/1204/problem/A
#
# Author: eloyhz
# Date: Sep/05/2020
#

from math import ceil

if __name__ == '__main__':
    s = input()
    n = len(s)
    if s.count('1') == 1:
        n -= 1
    if s == '0':
        print(0)
    else:
        print(ceil(n / 2))
