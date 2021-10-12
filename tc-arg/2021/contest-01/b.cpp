#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    char minor = s[0];
    for (char c : s)    {
        if (c < minor)
            minor = c;
    }
    set<string> st;
    string t(n, ' ');
    for (int i = 0; i < n; i++) {
        if (s[i] == minor)  {
            // rotate_copy(s.begin(), s.begin() + i, s.end(), t);
            int j = 0;
            for (int k = i; k < n; k++)  {
                t[j++] = s[k];
            }
            for (int k = 0; k < i; k++) {
                t[j++] = s[k];
            }
            st.insert(t);
        }
    }
    assert(!st.empty());
    for (char c: *st.begin())   {
        cout << c - minor;
    }
    cout << endl;
}