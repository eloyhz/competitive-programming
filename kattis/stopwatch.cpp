// Kattis - Stopwatch
// https://open.kattis.com/problems/stopwatch
// 25-08-2021

#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n, t, prev;
    cin >> n;
    bool running = false;
    long long ans = 0;
    while (n--) {
        cin >> t;
        if (!running)   {
            running = true;
            prev = t;
        }
        else    {
            running = false;
            ans += t - prev;
        }
    }
    if (running)
        cout << "still running\n";
    else
        cout << ans << endl;
    return 0;
}