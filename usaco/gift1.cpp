/*

ID: eloyhz1
PROG: gift1 
LANG: C++11

https://train.usaco.org/usacoprob2?a=Qy4F51xZOqi&S=gift1

*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);
    int table[10];
    memset(table, 0, sizeof table);
    int np; cin >> np;
    string people[np];
    for (int i = 0; i < np; i++)    {
        cin >> people[i];
    }
    for (int i = 0; i < np; i++)    {
        string giver; cin >> giver;
        int ig;
        for (ig = 0; ig < np; ig++) {
            if (people[ig] == giver)    {
                break;
            }
        } 
        int money, ng; cin >> money >> ng;
        if (money == 0 || ng == 0)    {
            continue;
        }
        int each = money / ng;
        int left = money % ng;
        table[ig] -= money;
        table[ig] += left;
        for (int j = 0; j < ng; j++)    {
            string recipient; cin >> recipient;
            int ir;
            for (ir = 0; ir < np; ir++) {
                if (people[ir] == recipient)    {
                    break;
                }
            }
            table[ir] += each;
        }
    }
    for (int i = 0; i < np; i++)    {
        cout << people[i] << " " << table[i] << endl;
    }

    return 0;
}
    
