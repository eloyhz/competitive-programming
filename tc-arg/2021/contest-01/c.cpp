#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n;
    cin >> n;
    vector<string> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int count = 0;
            if (i > 0 && b[i-1][j] == 'o') 
                count++;
            if (i+1 < n && b[i+1][j] == 'o')
                count++;
            if (j > 0 && b[i][j-1] == 'o')
                count++;
            if (j+1 < n && b[i][j+1] == 'o')
                count++;
            if (count % 2 != 0) {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
}