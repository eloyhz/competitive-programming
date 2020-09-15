#
# Author: eloyhz
# Date: Sep/15/2020
#
# Codeforces (CF688-D2-B) - Lovely Palindromes
# https://codeforces.com/contest/688/problem/B
#


if __name__ == '__main__':
    n = input()
    x = list(n)
    x.reverse()
    x = ''.join(x)
    print(n + x)

    
