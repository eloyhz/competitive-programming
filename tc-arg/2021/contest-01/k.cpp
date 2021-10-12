#include <iostream>

using namespace std;

int main()  {
    int n;
    cin >> n;
    int u = 0, d = 0, l = 0, r = 0;
    string s;
    cin >> s;
    for (char c : s)    {
        if (c == 'U') u++;
        else if (c == 'D') d++;
        else if (c == 'L') l++;
        else r++;
    }
    int ans = 2 * (min(l, r) + min(u, d));
    cout << ans << endl;
}