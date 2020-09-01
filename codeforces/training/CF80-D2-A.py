# Codeforces - Panoramix's Prediction
# https://codeforces.com/contest/80/problem/A
#
# Author: eloyhz
# Date: Sep/01/2020

def is_prime(num):
    for i in range(2, num):
        if num % i == 0:
            return False
    return True


if __name__ == '__main__':
    n, m = [int(x) for x in input().split()]
    ok = True
    for i in range(n + 1, m):
        if is_prime(i):
            ok = False
            break
    if not ok or not is_prime(m):
        print('NO')
    else:
        print('YES')
