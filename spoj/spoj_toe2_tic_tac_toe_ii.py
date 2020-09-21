#
# Author: eloyhz
# Date: Sep/21/2020
#
# SPOJ TOE2 - Tic-Tac-Toe ( II )
# https://www.spoj.com/problems/TOE2/
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
    dot = False
    for i in range(3):
        for j in range(3):
            if board[i][j] == '.':
                dot = True
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
    cx_wins = 0
    co_wins = 0
    for x in r:
        if x == 3:
            cx_wins += 1
        elif x == -3:
            co_wins += 1
    for x in c:
        if x == 3:
            cx_wins += 1
        elif x == -3:
            co_wins += 1
    for x in d:
        if x == 3:
            cx_wins += 1
        elif x == -3:
            co_wins += 1
#    for b in board: print(b)
#    print(f'{r = }, {c = }, {d = }, {count = }')
    if cx_wins == co_wins == 0 and dot:
        return False
    if co_wins > 0 and cx > co:
        return False
    if cx_wins > 0 and co_wins > 0:
        return False
    return True
    # return count <= 1


if __name__ == '__main__':
    while True:
        line = input()
        if line == "end":
            break
        board = [line[:3], line[3:6], line[6:]]
#        for b in board: print(b)
        print('valid' if is_valid(board) else 'invalid')
        
