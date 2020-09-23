//
// Author: eloyhz
// Date: Sep/21/2020
//
// SPOJ TOE1 - Tic-Tac-Toe ( I )
// https://www.spoj.com/problems/TOE1/
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
            return true;
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


/*
Be careful when you have won with this case:

3
XXO
OOX
OXX

XXX
OO.
..O

XXX
OOO
...

*/

