# Codeforces - Arpa’s hard exam and Mehrdad’s naive cheat
# https://codeforces.com/contest/742/problem/A
#
# Author: eloyhz
# Date: Sep/01/2020


if __name__ == '__main__':
    n = int(input())
    if n == 0:
        print(1)
    else:
        result = 1
        for i in range(n):
            result = (result * 8) % 10
        print(result)
