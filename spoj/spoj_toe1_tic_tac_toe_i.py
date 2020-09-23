#
# Author: eloyhz
# Date: Sep/21/2020
#
# SPOJ TOE1 - Tic-Tac-Toe ( I )
# https://www.spoj.com/problems/TOE1/
#
# Python TLE

from collections import deque
from copy import deepcopy

def is_valid(board):
    r = [0] * 3
    c = [0] * 3
    d = [0] * 2
    cx, co = 0, 0
    for row in board:
        cx += row.count('X')
        co += row.count('O')
#    print(f'{cx = }, {co = }')
    if cx < co or cx > co + 1:
        return False
    for i in range(3):
        for j in range(3):
            if board[i][j] == '.':
                continue
            if i == j:
                d[0] += (1 if board[i][j] == 'X' else -1)
                d[1] += (1 if board[3 - i - 1][i] == 'X' else -1)
            r[i] += (1 if board[i][j] == 'X' else -1)
    for j in range(3):
        for i in range(3):
            if board[i][j] == '.':
                continue
            c[j] += (1 if board[i][j] == 'X' else -1)
    count = 0
    for x in r:
        if abs(x) == 3:
            count += 1
    for x in c:
        if abs(x) == 3:
            count += 1
    for x in d:
        if abs(x) == 3:
            count += 1
#    for b in board: print(b)
#    print(f'{r = }, {c = }, {d = }, {count = }')
    return True if count <= 1 else False

def is_win(b):
    return b[0][0] == b[0][1] == b[0][2] and b[0][0] != '.' or \
            b[1][0] == b[1][1] == b[1][2] and b[1][0] != '.' or \
            b[2][0] == b[2][1] == b[2][2] and b[2][0] != '.' or \
            b[0][0] == b[1][0] == b[2][0] and b[0][0] != '.' or \
            b[0][1] == b[1][1] == b[2][1] and b[0][1] != '.' or \
            b[0][2] == b[1][2] == b[2][2] and b[0][2] != '.' or \
            b[0][0] == b[1][1] == b[2][2] and b[0][0] != '.' or \
            b[2][0] == b[1][1] == b[0][2] and b[2]


def solve(b):
    q = deque()
    u = [['.' for _ in range(3)] for _ in range(3)]
    q.append((u, 'X'))
    while q:
        x = q.popleft()
        u = x[0]
        turn = x[1]
        if u == b:
            return True
        if is_win(u):
            continue
        for i in range(3):
            for j in range(3):
                if u[i][j] == '.' and b[i][j] == turn:
                    v = deepcopy(u)
                    v[i][j] = turn
                    q.append((v, 'O' if turn == 'X' else 'X'))
    return False


if __name__ == '__main__':
    n = int(input())
    for _ in range(n):
        board = []
        for _ in range(3):
            board.append(list(input()))
        input()
        print('yes' if solve(board) else 'no')
        
