# Codeforces - Snacktower
# https://codeforces.com/problemset/problem/767/A
#
# Author: eloyhz
# Date: Aug/31/2020

if __name__ == '__main__':
    n = int(input())
    a = [int(x) for x in input().split()]
    expected = n
    stored = []
    for ai in a:
        if ai != expected:
            print()
            stored.append(ai)
        else:
            print(f'{ai} ', end='')
            expected -= 1
            if not stored:
                print()
                continue
            stored.sort()
            while stored and expected == stored[-1]:
                print(f'{stored.pop()} ', end='')
                expected -= 1
            print()
    stored.sort()
    while stored:
        print(f'{stored.pop()} ', end='')
