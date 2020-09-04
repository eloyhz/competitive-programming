# Codeforces - Raising Bacteria
# https://codeforces.com/contest/579/problem/A
#
# Author: eloyhz
# Date: Sep/04/2020
#


if __name__ == '__main__':
    x = int(input())
    b = 1
    while x > 1:
        if x % 2:
            x -= 1
            b += 1
        x //= 2
    print(b)

