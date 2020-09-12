# Codeforces - Case of the Zeros and Ones
# https://codeforces.com/contest/556/problem/A
#
# Author: eloyhz
# Date: Sep/10/2020
#

def solve_tle(n, s):
    while s and (s.find('01') >= 0 or s.find('10') >= 0):
        s = s.replace('01', '')
        s = s.replace('10', '')
    return len(s)


def solve_wa(n, s):
    i = 0
    count = 0
    while i < n - 1:
        # print(f'{i = }, {count = }') 
        if s[i] == '0' and s[i + 1] == '1':
            count += 1
            i += 2
        elif s[i] == '1' and s[i + 1] == '0':
            count += 1
            i += 2
        else:
            i += 1
    return n - count * 2


if __name__ == '__main__':
    n = int(input())
    s = input()
    print(solve_wa(n, s))
