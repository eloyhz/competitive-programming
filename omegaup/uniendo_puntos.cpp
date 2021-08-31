// omegaUp - Uniendo puntos
// https://omegaup.com/arena/problem/Uniendo-puntos/
// 31-08-2021

#include <bits/stdc++.h>

using namespace std;

struct point {
    int x, y;
};

double dist(point a, point b)   {
    double dx = abs(a.x - b.x);
    double dy = abs(a.y - b.y);
    return sqrt(dx * dx + dy * dy);
}

int main()  {
    double ans = 0;
    int n;
    cin >> n;
    point init, prev, current;
    cin >> init.x >> init.y;
    prev = init;
    while (n-- > 1) {
        cin >> current.x >> current.y;
        ans += dist(prev, current);
        prev = current;
    }
    ans += dist(prev, init);
    cout << fixed << setprecision(2) << ans << endl;
}