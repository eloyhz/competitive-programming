// Kattis - Rating Problems
// https://open.kattis.com/problems/ratingproblems
// 25-08-2021

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n, k, r;
    cin >> n >> k;
    double ratings = 0;
    int missing = n - k;
    while (k--) {
        cin >> r;
        ratings += r;
    }
    cout << (ratings + missing * -3) / n
        << " " << (ratings + missing * 3) / n << endl;
    return 0;
}