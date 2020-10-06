#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    set<pair<int, int>> b;

    cin >> n;
    while (n--) {
        int d, m;
        char s;
        cin >> d >> s >> m;
        b.insert({d, m});
    }
    cout << b.size() << endl;
}
