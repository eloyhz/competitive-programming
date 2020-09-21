#
# Author: eloyhz
# Date: Sep/21/2020
#
# SPOJ TOE1 - Tic-Tac-Toe ( I )
# https://www.spoj.com/problems/TOE1/
#

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


if __name__ == '__main__':
    n = int(input())
    for _ in range(n):
        board = []
        for _ in range(3):
            board.append(input())
        input()
        print('yes' if is_valid(board) else 'no')
        
