#include <iostream>

using namespace std;

int main()  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    // 1 + 0 = 01
    // 1 + 1 = 10
    int ans = 0;
    for (char c : s)    {
        if (c == '0')  {
            ans++;
            break;
        }
        else if (c == '1')    {
            ans++;
        }
    }
    cout << ans << endl;
}