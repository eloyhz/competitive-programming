//
// Author: eloyhz
// Date: Sep/22/2020
//
// SPOJ TOE2 - Tic-Tac-Toe ( II )
// https://www.spoj.com/problems/TOE2/
//

#include <bits/stdc++.h>

using namespace std;
typedef vector<string> vs;

bool is_win(vs& b)
{
    return b[0][0] == b[0][1] && b[0][0] == b[0][2] && b[0][0] != '.' ||
            b[1][0] == b[1][1] && b[1][0] == b[1][2] && b[1][0] != '.' ||
            b[2][0] == b[2][1] && b[2][0] == b[2][2] && b[2][0] != '.' ||
            b[0][0] == b[1][0] && b[0][0] == b[2][0] && b[0][0] != '.' ||
            b[0][1] == b[1][1] && b[0][1] == b[2][1] && b[0][1] != '.' ||
            b[0][2] == b[1][2] && b[0][2] == b[2][2] && b[0][2] != '.' ||
            b[0][0] == b[1][1] && b[0][0] == b[2][2] && b[0][0] != '.' ||
            b[2][0] == b[1][1] && b[2][0] == b[0][2] && b[2][0] != '.';
}

bool is_full(vs& b) 
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (b[i][j] == '.') {
                return false;
            }
        }
    }
    return true;
}

bool is_valid(vs b)
{
    queue<pair<vs, char>> q;
    vs u = {"...", "...", "..."};
    q.push({u, 'X'});
    while (!q.empty())  {
        auto x = q.front();
        q.pop();
        u = x.first;
        char turn = x.second;
        if (u == b) {
            return (is_win(b) || is_full(b)) ? true : false;
        }
        if (is_win(u))  {
            continue;
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (u[i][j] == '.' && b[i][j] == turn)  {
                    auto v = u;
                    v[i][j] = turn;
                    q.push({v, turn == 'X' ? 'O' : 'X'});
                }
            }
        }
    }
    return false;
}

int main()
{
    int n;
    vs board;
    string s, t;

    while (true) {
        cin >> s;
        if (s == "end") {
            break;
        }
        board.clear();
        board.push_back(s.substr(0, 3));
        board.push_back(s.substr(3, 3));
        board.push_back(s.substr(6, 3));
        cout << (is_valid(board) ? "valid" : "invalid") << endl;
   }
   return 0;
} 


