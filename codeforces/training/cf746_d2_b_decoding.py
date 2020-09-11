#
# Author: eloyhz
# Date: Sep/11/2020
#
# Codeforces (CF746-D2-B) - Decoding
# https://codeforces.com/contest/746/problem/B
#


if __name__ == '__main__':
    n = int(input())
    encoded = input()
    prefix = True
    decoded = ''
    start = 0
    if n % 2 == 1:
        decoded = encoded[0]
        start = 1
    for i in range(start, n):
        if prefix:
            decoded = encoded[i] + decoded
        else:
            decoded += encoded[i]
        prefix = not prefix
    print(decoded)

