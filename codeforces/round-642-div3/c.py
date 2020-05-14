# C. Board Moves
# https://codeforces.com/contest/1353/problem/C


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        board = [[0 for _ in range(n)] for _ in range(n)]
        k = n // 2
        for i in range(n // 2):
            for j in range(i, n - i):
                # fill rows
                board[i][j] = k
                board[n - i - 1][j] = k
                # fill columns
                board[j][i] = k
                board[j][n - i - 1] = k
            k -= 1
        result = 0
        for b in board:
            result += sum(b)
        print(result)
