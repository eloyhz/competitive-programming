# Codeforces - Arpa’s hard exam and Mehrdad’s naive cheat
# https://codeforces.com/contest/742/problem/A
#
# Author: eloyhz
# Date: Sep/01/2020


def solve_tle(n):
    if n == 0:
        return 1
    else:
        result = 1
        for i in range(n):
            result = (result * 8) % 10
        return result


def solve_editorial(n):
    if n == 0:
        return 1
    else:
        mod = {0: 6, 1: 8, 2: 4, 3: 2}
        return mod[n % 4]


if __name__ == '__main__':
    n = int(input())
    print(solve_editorial(n))
    
