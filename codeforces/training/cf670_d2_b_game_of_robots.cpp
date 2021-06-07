// Codeforces (CF670-D2-B) - Game of Robots [AC]
// https://codeforces.com/contest/670/problem/B
// Date: 07/06/21


#include <bits/stdc++.h>

using namespace std;


int find_x(long long n, int k)    {
    long long left = 0, right = min((long long)(2e9 + 1), n * (n + 1) / 2 + 1);
    while (right > left + 1)    {
        long long x = (left + right) / 2;
        if (x * (x + 1) / 2 < k)
            left = x;
        else
            right = x;
    }
    return right;
}

int solve(int n, int k, vector<int>& id)    {
    long long x = find_x(n, k);
    if (x > 1)
        x--;
    long long i = x * (x + 1) / 2 + 1;
    return id[k - i];
}

int main()  {
    int n, k;
    cin >> n >> k;
    vector<int> id(n);
    for (int i = 0; i < n; i++)
        cin >> id[i];
    cout << (k > 1 ? solve(n, k, id) : id[0]) << endl;
    return 0;
}