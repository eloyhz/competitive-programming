/*

ITMO Academy - Binary Search for Answer
2.G. Student Councils [AC]
https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/G
Date: 07/05/21

*/


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int k, n;
vector<int> a;

// From hints & comments in forum
bool good(ll C)    {
    ll slots = C * k;
    for (int i = 1; i <= n; i++)
        slots -= min(C, (ll)a[i]);
    return slots <= 0;
}

// Can be formed C councils ?
bool good_wa(int C)    {
    int students_per_council = 0;
    int current_count = 0;

    for (int group = 1; group <= n; group++)   {
        int next_count = min(a[group], C);
        if (current_count + next_count > C - 1)
            students_per_council++;
        current_count = (current_count + next_count) % C;
    }
    return students_per_council >= k;
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> k >> n;
    a.resize(n + 1);
    ll s = 0;
    for (int i = 1; i <= n; i++)    {
        cin >> a[i];
        s += a[i];
    }
    // sort(a.begin(), a.end());
/*
    for (int i = 1; i <= s / k + 1; i++)
        cout << "i = " << i << ", good(i) = " << good(i) << endl;
*/
    ll left = 1;
    ll right = s / k + 1;
//    while (good(right)) right *= 2;
    while (right > left + 1)    {
        ll mid = (left + right) / 2;
        if (good(mid))
            left = mid;
        else
            right = mid;
    }
    cout << left << "\n";

    return 0;
}