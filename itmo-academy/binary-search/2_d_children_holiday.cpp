/*

ITMO Academy - Binary Search for Answer
2.D. Children Holiday [AC]
https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/D

Date: 05/05/21

*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct assistant    {
    int t, z, y;
};

int n, m;
vector<assistant> a;
vector<int> r;

bool good(ll T) {
    int total_ballons = 0;
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        int cycle = a[i].t * a[i].z + a[i].y;
        ll full_cycles = T / cycle; // amount of cycles with rest in T
        ll last_cycle = T % cycle; // last cycle without rest
        int balloons_with_rest = full_cycles * a[i].z;
        int balloons_without_rest = min(last_cycle / a[i].t, (ll)a[i].z);
        int balloons =  balloons_with_rest + balloons_without_rest;
        if (total_ballons + balloons >= m)  {
            x[i] = m - total_ballons;
            r = x;
            return true;
        }
        x[i] = balloons;
        total_ballons += balloons;
    }
    return false;
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n;
    a.resize(n);
    r.resize(n);
    for (int i = 0; i < n; i++)
        cin >> a[i].t >> a[i].z >> a[i].y;
    ll left = -1;
    ll right = 1;
    while (!good(right))
        right *= 2;
    while (right > left + 1)    {
        ll mid = (left + right) / 2;
        if (good(mid))
            right = mid;
        else
            left = mid;
    }
    cout << right << "\n";
    for (int x : r) 
        cout << x << " ";
    cout << "\n";
    return 0;
}

/*

20 2
2 5 1
2 4 2

2 2
1 1 1
1 1 1

3 2
2 2 5
1 1 10


4 2
2 2 5
1 1 10

*/