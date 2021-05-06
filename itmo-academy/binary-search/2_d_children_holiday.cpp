/*

ITMO Academy - Binary Search for Answer
2.D. Children Holiday [WA]
https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/D

Date: 05/05/21

*/

#include <bits/stdc++.h>

using namespace std;

struct assistant    {
    int t, z, y;
};

bool good(int t, int m, vector<assistant>& a, vector<int>& r)   {
    int b = 0;
    int n = a.size();
    vector<int> s(n);
    for (int i = 0; i < n; i++)  {
        int ti = a[i].t, zi = a[i].z, yi = a[i].y;
        int wi = ti * zi + yi;
        int bi = zi * t / wi;
        bi += min(zi, (t % wi) / ti);
        if (b + bi > m)    {
            s[i] = m - b;
            b = m;
            break;
        }
        s[i] = bi;
        b += bi;
    }
    if (b < m)
        return false;
    r = s;
    return true;
}

int main()  {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n;
    cin >> m >> n;  // m balloons, n assistants
    vector<assistant> a(n);
    vector<int> r(n);
    for (int i = 0; i < n; i++)
        cin >> a[i].t >> a[i].z >> a[i].y;
    int left = -1;
    int right = 1;
    while (!good(right, m, a, r))
        right *= 2;
    while (right > left + 1)    {
        int mid = (left + right) / 2;
        if (good(mid, m, a, r))
            right = mid;
        else
            left = mid;
    }
/*
    cout << "left = " << left << "\n";
    cout << "good(left) = " << good(left, m, a, r) << endl; 
    for (auto c : r)
        cout << c << " ";
    cout << "right = " << right << "\n";
    cout << "good(right) = " << good(right, m, a, r) << endl; */
    cout << right << "\n";
    for (auto c : r)
        cout << c << " ";
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

t = 2, z = 2, y = 5
assistant 1 inflates 1 balloon in 2 mins and rests 5 mins after 2 balloons
2 * 2 + 5 = 9

t = 1, z = 1, y = 10
assistant 2 inflates 1 balloon in 1 mins and rests 10 mins after 1 balloons
1 * 1 + 10 = 11


4 2
2 2 5
1 1 10


*/