#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> applicants(n);
    for (int i = 0; i < n; i++)
        cin >> applicants[i];
//    sort(applicants.begin(), applicants.end());
    multiset<int> appartments;
    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;
        appartments.insert(b);
    }
    int ans = 0;
    for (auto a : applicants)   {
        auto left = appartments.lower_bound(a - k);
        auto right = appartments.upper_bound(a + k);
        if (left == right)
            continue;
        ans++;
        appartments.erase(left);
    }
    cout << ans << endl;
}