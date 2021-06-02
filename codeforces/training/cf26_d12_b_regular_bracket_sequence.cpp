// Codeforces (CF26-D12-B) - Regular Bracket Sequence [AC/with editorial]
// https://codeforces.com/contest/26/problem/B
// Date: 02/06/21
// 

#include <bits/stdc++.h>

using namespace std;

int solve_alt(string& s)    {
    int count = 0;
    int total = 0;
    for (char c : s)    {
        if (c == '(')
            count++;
        else    {
            if (count != 0) {
                count--;
                total += 2;
            }
        }
    }
    return total;
}

int solve_editorial(string& s)    {
    int left = 0, right = 0;
    for (char c : s)    {
        int diff = left - right;
        if (diff == 0 && c == ')')  {
            continue;
        }
        if (c == '(')
            left++;
        else    {
            right++;
        }
    }
    return right * 2;
}

int solve(string& s)    {
    stack<char> st;
    int total = 0;
    for (char c : s)    {
        if (c == '(')   {
            st.push(c);
        }
        else if (c == ')')  {
            if (st.empty()) {
                continue;
            }
            if (st.top() == '(')    {
                total += 2;
                st.pop();
            }
        }
    }
    return total;
}


int check_is_valid(string& s)    {
    stack<char> st;
    bool is_valid = true;
    for (char c : s)    {
        if (c == '(')   {
            st.push(c);
        }
        else if (c == ')')  {
            if (st.empty()) {
                is_valid = false;
                break;
            }
            if (st.top() == '(')    {
                st.pop();
            }
        }
    }
    if (!st.empty())
        is_valid = false;
    return is_valid;
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    cout << solve(s) << endl;
    return 0;
}