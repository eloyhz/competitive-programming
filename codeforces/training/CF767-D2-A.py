# Codeforces - Snacktower
# https://codeforces.com/problemset/problem/767/A
#
# Author: eloyhz
# Date: Aug/31/2020

import heapq

if __name__ == '__main__':
    n = int(input())
    a = [int(x) for x in input().split()]
    expected = n
    stored = []
    heapq.heapify(stored)
    for ai in a:
        if ai != expected:
            print()
            heapq.heappush(stored, -ai)
        else:
            print(f'{ai} ', end='')
            expected -= 1
            if not stored:
                print()
                continue
            while stored:
                q = -heapq.heappop(stored)
                if q != expected:
                    heapq.heappush(stored, -q)
                    break
                print(f'{q} ', end='')
                expected -= 1
            print()
    while stored:
        q = -heapq.heappop(stored)
        print(f'{q} ', end='')
