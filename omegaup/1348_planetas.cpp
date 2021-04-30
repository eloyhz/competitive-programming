/*

omegaUp 1348 - Planetas
https://omegaup.com/arena/problem/Planetas/

Fecha: 30/04/2021

*/


#include <bits/stdc++.h>

using namespace std;

const double MIN_DIST = 0.001;
const double EPS = 0.000001;


double calculate_force(vector<int> x, int current, double m)   {
    double left_force = 0, right_force = 0;
    int n = x.size();

    for (int i = 0; i <= current; i++)  {
        double force = 1 / fabs(x[i] - m);
        left_force += force;
    }
    for (int i = current + 1; i < n; i++)   {
        double force = 1 / fabs(x[i] - m);
        right_force += force;
    }
    return right_force - left_force;
}

double search_position(vector<int> x, int index)    {
    double left = x[index] + MIN_DIST;
    double right = x[index + 1] - MIN_DIST;
    double mid;

    while (right - left > MIN_DIST)    {
        mid = (left + right) / 2;
        double force = calculate_force(x, index, mid);
        if (fabs(force) < EPS)
            return mid;
        if (force < 0)
            left = mid;
        else
            right = mid;
    }
    return mid;
}

void solve(vector<int> x)   {
    int n = x.size();

    if (n == 1)
        cout << 0 << "\n";
    else    {
        cout << n - 1 << "\n";
        for (int i = 0; i < n - 1; i++) {
            double pos = search_position(x, i);
            cout << setprecision(3) << fixed << pos << " ";
        }
        cout << "\n";
    }
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    solve(x);

    return 0;
}