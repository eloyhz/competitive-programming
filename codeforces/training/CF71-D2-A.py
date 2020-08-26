# Way Too Long Words
# https://codeforces.com/contest/71/problem/A
#
# Author: eloyhz
# Date: Aug/26/2020


if __name__ == '__main__':
    n = int(input())
    for _ in range(n):
        s = input()
        if len(s) <= 10:
            print(s)
        else:
            print(s[0] + str(len(s) - 2) + s[-1])


