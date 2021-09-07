// 2021 ICPC Gran Premio de Mexico 1ra Fecha
// K. Kids at the Party [AC]
// https://codeforces.com/gym/103274/problem/K
// 07-09-2021

#include <bits/stdc++.h>

using namespace std;

void solve()    {
    string num;
    cin >> num;
    set<int> ans;
    // A number is divisible by 2 if the last digit is divisible by 2.
    int last_digit = (num[num.size() - 1] - '0');
    if (last_digit % 2 == 0)
        ans.insert(2);
    // A number is divisible by 3 if sum of its digits is divisible by 3.
    int sum = 0;
    for (char d: num)
        sum += d - '0';
    if (sum % 3 == 0)
        ans.insert(3);
    // A number is divisible by 4 if number formed by last two digits of it is divisible by 4.
    if (num.size() == 1 && last_digit % 4 == 0)
        ans.insert(4);
    else {
        int d = (num[num.size() - 2] - '0') * 10 + last_digit;
        if (d % 4 == 0)
            ans.insert(4);
    }
    //  A number is divisible by 5 if its last digit is 0 or 5.
    if (last_digit == 0 || last_digit == 5)
        ans.insert(5);
    // A number is divisible by 6 it's divisible by 2 and 3. 
    if (ans.count(2) && ans.count(3))
        ans.insert(6);
    if (ans.empty())
        cout << "-1";
    else for (auto it = ans.begin(); it != ans.end(); it++) {
        if (it != ans.begin())
            cout << " ";
        cout << *it;
    }
    cout << endl;
}

int main()  {
    int n;
    cin >> n;
    while (n--) {
        solve();
    }
}