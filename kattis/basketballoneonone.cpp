// Kattis - Basketball One-on-One
// https://open.kattis.com/problems/basketballoneonone
// 06-10-2021

#include <iostream>
#include <string>

using namespace std;

int main()  {
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.length(); i += 2) {
        if (s[i] == 'A')
            a += s[i + 1] - '0';
        else
            b += s[i + 1] - '0';
    }
    cout << (a > b ? 'A' : 'B') << endl;
}