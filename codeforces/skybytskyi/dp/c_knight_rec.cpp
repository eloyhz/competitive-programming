#include <bits/stdc++.h>

using namespace std;

#define MAX 51

int board[MAX][MAX];

int knight_move(int r, int c)   {
    if (r > MAX || r < 1 || c > MAX || c < 1)
        return 0;
    int &ans = board[r][c];
    if (ans != -1)
        return ans;
    ans = knight_move(r-2, c-1);
    ans += knight_move(r-1, c-2);
    return ans;
}

int main()  {
    freopen("knight.in", "r", stdin);
    freopen("knight.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    memset(board, -1, sizeof(board));
    board[1][1] = 1;
    cout << knight_move(n, m) << endl;
}
