# Codeforces - Mahmoud and Longest Uncommon Subsequence
# https://codeforces.com/contest/766/problem/A
#
# Author: eloyhz
# Date: Aug/31/2020

def lcs(a, b):
    m = len(a)
    n = len(b)
    dp = [[0 for _ in range(n + 1)] for _ in range(m + 1)]
    for i in range(n + 1):
        dp[0][i] = 0
    for i in range(m + 1):
        dp[i][0] = 0
    for i in range(m):
        for j in range(n):
            if a[i] == b[j]:
                dp[i + 1][j + 1] = dp[i][j] + 1
            else:
                dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j])
    return dp[m][n]


if __name__ == '__main__':
    a = input()
    b = input()
    if a == b:
        print(-1)
    else:
        print(max(len(a), len(b)))
