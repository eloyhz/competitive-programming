# Codeforces - Twins
# https://codeforces.com/contest/160/problem/A
#
# Author: eloyhz
# Date: Aug/31/2020

if __name__ == '__main__':
    n = int(input())
    a = [int(x) for x in input().split()]
    s = sum(a)
    a.sort(reverse=True)
    coins = 1
    me = 0
    while coins <= n:
        me += a[coins - 1]
        if me > s - me:     # another way is me > s / 2
            break
        coins += 1
    print(coins)

