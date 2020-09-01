# Codeforces - Counterexample
# https://codeforces.com/contest/483/problem/A
#
# Author: eloyhz
# Date: Sep/01/2020

def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


def are_coprimes(a, b):
    return gcd(a, b) == 1


if __name__ == '__main__':
    l, r = [int(x) for x in input().split()]
    found = False
    a = b = c = 0
    for i in range(l, r - 1):
        for j in range(i + 1, r):
            if are_coprimes(i, j):
                for k in range(j + 1, r + 1):
                    if not are_coprimes(i, k):
                        found = True
                        break
            if found:
                break
        if found:
            break
    if not found:
        print(-1)
    else:
        print(i, j, k)

