// Kattis - Trik
// https://open.kattis.com/problems/trik
// 06-10-2021


#include <bits/stdc++.h>

using namespace std;

int main()  {
    string s;
    cin >> s;
    int cup = 1;
    for (char c : s)    {
        if (c == 'A')   {
            if (cup == 1) cup = 2;
            else if (cup == 2) cup = 1;
        }
        else if (c == 'B')   {
            if (cup == 2) cup = 3;
            else if (cup == 3) cup = 2;
        }
        else {
            if (cup == 1) cup = 3;
            else if (cup == 3) cup = 1;
        }
    }
    cout << cup << endl;
}