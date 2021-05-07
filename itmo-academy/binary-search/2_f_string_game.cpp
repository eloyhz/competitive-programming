/*

ITMO Academy - Binary Search for Answer
2.F. String Game [WA5]
https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F

Date: 07/05/21

*/

#include <bits/stdc++.h>

using namespace std;

string t, p;
int n;
vector<int> a;
vector<bool> deleted;

// Search T in P (simpler)
bool good(int l)    {
    set<int> d;
    for (int i = 1; i <= l; i++)
        d.insert(a[i]);
    int j = 0;
    int m = p.size();
    for (int i = 0; i < n; i++) {
        if (d.find(i + 1) != d.end())
            continue;
        if (t[i] == p[j])
            j++;
        if (j == m)
            return true;
    }
    return false;
}


// Search P in T (failing, overcomplicated)
bool good0(int l)    {
    fill(deleted.begin(), deleted.end(), false);
    for (int i = 1; i <= l; i++)
        deleted[a[i]] = true;
    int m = p.size();
    int j = 0;
    for (int i = 0; i < m; i++) {
        for (; j < n; j++)  {
            if (deleted[j + 1])
                continue;
            if (p[i] == t[j])   {
                j++;
                break;
            }
        }
        if (j == n)
            return false;
    }
    return true;
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t >> p;
    n = t.size();
    a.resize(n + 1);
    deleted.resize(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

/*
    for (int i = 0; i <= n; i++)  
        cout << "i = " << i << ", good(i) = " << good(i) << endl;
*/
    int left = 0;
    int right = n;
    while (right > left + 1)    {
        int mid = (left + right) / 2;
        if (good(mid))
            left = mid;
        else
            right = mid;
    }
    cout << left << "\n";
    return 0;
}