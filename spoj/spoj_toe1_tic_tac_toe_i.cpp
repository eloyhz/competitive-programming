//
// Author: eloyhz
// Date: Sep/21/2020
//
// SPOJ TOE1 - Tic-Tac-Toe ( I )
// https://www.spoj.com/problems/TOE1/
//

#include <bits/stdc++.h>

using namespace std;

bool is_valid(vector<string>& board)
{
    int r[3] = {0, 0, 0};
    int c[3] = {0, 0, 0};
    int d[2] = {0, 0};
    int cx = 0;
    int co = 0;
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (board[i][j] == 'X') {
                cx++;
            }
            else if (board[i][j] == 'O')    {
                co++;
            }
        }
    }
    // cout << "cx = " << cx << ", co = " << co << endl;
    if (cx < co || cx > co + 1) {
        return false;
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (board[i][j] == '.') {
                continue;
            }
            if (i == j) {
                d[0] += board[i][j] == 'X' ? 1 : -1;
                d[1] += board[2 - i][i] == 'X' ? 1 : -1;
            }
            r[i] += board[i][j] == 'X' ? 1 : -1;
        }
    }

    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {
            if (board[i][j] == '.') {
                continue;
            }
            c[j] += board[i][j] == 'X' ? 1 : -1;
        }
    }
    /*
    cout << "r = ";
    for (i = 0; i < 3; i++) {
        cout << r[i] << " ";
    }
    cout << endl;
    cout << "c = ";
    for (i = 0; i < 3; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    cout << "d = ";
    for (i = 0; i < 2; i++) {
        cout << d[i] << " ";
    }
    cout << endl;
    */
    int count = 0;
    for (i = 0; i < 3; i++) {
        if (abs(r[i]) == 3) {
            count++;
        }
        if (abs(c[i]) == 3) {
            count++;
        }
        if (i < 2 && abs(d[i]) == 3)    {
            count++;
        }
    }
    return count <= 1;
}

int main()
{
    int n;
    vector<string> board;
    string s;

    cin >> n;
    while (n--) {
        board.clear();
        for (int i = 0; i < 3; i++) {
            cin >> s;
            board.push_back(s);
        }
        getline(cin, s);
        cout << (is_valid(board) ? "yes" : "no") << endl;
   }
   return 0;
} 
