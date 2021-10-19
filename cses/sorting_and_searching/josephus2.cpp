/*

CSES - Josephus Problem II

https://cses.fi/problemset/submit/2163/
Date: 18/10/21

Author: eloyhz

*/


#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag, 
    tree_order_statistics_node_update> indexed_set;

void solve_with_indexed_set(int n, int k)  {
    indexed_set s;
    for (int i = 1; i <= n; i++)    {
        s.insert(i);
    }
   int i = 0;
   while (!s.empty())   {
       n = s.size();
       i = (i + k) % n;
       auto x = s.find_by_order(i);
       cout << *x << " ";
       s.erase(x);
   }
   cout << endl;
}

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    solve_with_indexed_set(n, k);
}


/*

// https://cses.fi/problemset/task/2163/
// https://cses.fi/user/80571/

#include <bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define nl '\n'
#define print(vec,l,r) {for(int _i_ = (l); _i_ < (r); _i_++) cout << (vec)[_i_] <<" "; cout << endl;}
#define forf(i,a,b) for(int i = (a); i < (b); i++)
#define forb(i,a,b) for(int i = (b)-1; i >= (a); i--)
#define input(vec,N) for(int _i_ = 0; _i_ < (N); _i_++) cin >> (vec)[_i_];
#define debug(x) cerr << #x << " = " << (x) << endl;
#define si(x) int(x.size())
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
 
int n, k;
vi arr;
 
void add(int x, int i)
{
	while(i <= n)
	{
		arr[i] += x;
		i += i&-i;
	}
}
 
int sum(int i)
{
	int tot = 0;
	while(i > 0)
	{
		tot += arr[i];
		i -= i&-i;
	}
	return tot;
}
 
int find(int x)
{
	int l = 0, r = n;
	while(l+1 < r)
	{
		int mid = (l+r)/2;
		if(sum(mid) < x) l = mid;
		else r = mid;
	}
	return r;
}
 
void solve()
{
	cin>>n>>k;
	
	arr.resize(n+1);
	forf(i, 1, n+1)
	{
		add(1, i);
	}
	
	int cur = 0;
	
	forf(i, 0, n)
	{
		cur = (cur+k)%(n-i);
		int temp = find(cur+1);
		cout<<temp<<" ";
		//forf(j, 0, n+1) cout<<arr[j]<<" ";
		//cout<<endl;
		add(-1, temp);
	}
	cout<<endl;
}
 
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	//cin>>t;
	t = 1;
	while(t--)
	{
		solve();
	}
	return 0;
}

*/