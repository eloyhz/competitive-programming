# Codeforces - Football (CF43-D2-A)
# https://codeforces.com/contest/43/problem/A
#
# Author: eloyhz
# Date: Sep/01/2020


if __name__ == '__main__':
    n = int(input())
    goals = {}
    for i in range(n):
        g = input()
        if g not in goals:
            goals[g] = 1
        else:
            goals[g] += 1
    winner = None
    for k in goals:
        if winner == None or goals[k] > goals[winner]:
            winner = k
    print(winner)

