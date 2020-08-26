# New Password
# https://codeforces.com/contest/770/problem/A
#
# Author: eloyhz
# Date: Aug/26/2020


if __name__ == '__main__':
    n, k = [int(x) for x in input().split()]
    r = n // k
    password = ''
    for _ in range(r):
        for i in range(k):
            password += str(chr(ord('a') + i))
    r = n % k
    for i in range(r):
        password += str(chr(ord('a') + i))
    print(password)
