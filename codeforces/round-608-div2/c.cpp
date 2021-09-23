// Codeforces Round #608 (Div. 2)
// C. Shawarma Tent
// https://codeforces.com/contest/1271/problem/C
// 23-09-2021

#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MAX = 1e9;

#define DBG(x) cerr << #x << " = " << (x) << endl
#define DBGY(x) cerr << #x << " = " << (x) << " , "
#define LINE cerr << "================" << endl

template <typename T>
ostream &operator << (ostream &os, const vector<T>& v)  {
    os << "[";
    for (int i = 0; i < v.size(); i++)  {
        if (i > 0) os << ", ";
        os << v[i];
    }
    return os << "]";
}

struct point {
    ll x, y;
};

ostream& operator<<(ostream &os, point p)   {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

ll dist(point& a, point& b) {
    return abs(a.x - b.x) + abs(a.y - b.y); 
}
void solve()    {
    int n;
    point s;
    cin >> n >> s.x >> s.y;
    vector<point> a(n);
    vector<ll> d(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y;
        d[i] = dist(a[i], s); 
    }
//    DBG(a);
//    DBG(d);
    int count_up = 0, count_down = 0, count_right = 0, count_left = 0;
    point up{s.x, s.y-1}, down{s.x, s.y+1}, left{s.x-1, s.y}, right{s.x+1, s.y};
    for (int i = 0; i < n; i++) {
        if (up.y <= MAX && dist(a[i], up) < d[i]) 
            count_up++;
        if (down.y >= 0 && dist(a[i], down) < d[i]) 
            count_down++;
        if (right.x <= MAX && dist(a[i], right) < d[i]) 
            count_right++;
        if (left.x >= 0 && dist(a[i], left) < d[i]) 
            count_left++;
    }
    if (count_up >= count_down && count_up >= count_right && count_up >= count_left)    {
        cout << count_up << "\n";
        cout << up.x << " " << up.y << "\n";
    }
    else if (count_down >= count_up && count_down >= count_right && count_down >= count_left)    {
        cout << count_down << "\n";
        cout << down.x << " " << down.y << "\n";
    }
    else if (count_right >= count_up && count_right >= count_down && count_right >= count_left)    {
        cout << count_right << "\n";
        cout << right.x << " " << right.y << "\n";
    }
    else  {
        cout << count_left << "\n";
        cout << left.x << " " << left.y << "\n";
    }

}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
