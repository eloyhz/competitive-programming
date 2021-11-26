# Codeforces - Beautiful Year
# https://codeforces.com/contest/271/problem/a
#
# Author: eloyhz
# Date: Nov/11/2021
#

def all_distinct(num):
    digits = [0]*10
    while num > 0:
        d = num % 10
        digits[d] += 1
        if digits[d] > 1:
            return False
        num //= 10
    return True

year = int(input())
next = year + 1
while not all_distinct(next):
    next += 1
print(next)
