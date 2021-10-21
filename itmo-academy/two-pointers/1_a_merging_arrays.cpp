/*
 *
 * ITMO Academy - Two Pointers Method - Part 1
 * A. Merging Arrays
 * https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
 * 21-10-2021
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> c(n + m);
    for (int &x : a) 
        cin >> x;
    for (int &x : b) 
        cin >> x;
    int i = 0, j = 0, k = 0;
    while (i < n || j < m)  {
        if (j == m || i < n && a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    for (int &x: c)
        cout << x << " ";
    cout << endl;
}