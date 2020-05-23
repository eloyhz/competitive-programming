// UVa 732 - Anagrams by Stack
// https://onlinejudge.org/external/7/732.pdf
// Editorial: 
// https://www.redgreencode.com/implementing-a-fast-solution-to-uva-732/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

string source, target;
int n;

bool are_anagrams()
{
	if (source.size() != target.size())	{
		return false;
	}
	string s = source;
	string t = target;
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	if (s != t)	{
		return false;
	}
	return true;
}

void build_path(vector<char> path, stack<char> st, char next_op, int ci, int co, int i, int o)
{
	path.push_back(next_op);
	if (next_op == 'i')	{
		i++;
		if (ci == n)	{
			return;
		}
		st.push(source[ci++]);
	}	else	{
		if (st.empty())	{
			return;
		}
		o++;
		char c = st.top();
		if (c != target[co++])	{
			return;
		}
		st.pop();
	}
	if (path.size() == n * 2)	{
		for (int i = 0; i < path.size(); i++)	{
			cout << path[i];
			cout << (i < path.size() - 1 ? " " : "");
		}
		cout << "\n";
	}	else	{
		if (i < n)	{
			build_path(path, st, 'i', ci, co, i, o);
		}
		if (o < n)  {
			build_path(path, st, 'o', ci, co, i, o);
		}
	}
}

void test_case()
{
	if (!are_anagrams())	{
		cout << "[\n]\n";
		return;
	}
    n = source.size();
	vector<char> p;
	stack<char> s;
    cout << "[\n";
	build_path(p, s, 'i', 0, 0, 0, 0);
    cout << "]\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (!cin.eof())	{
		source = target = "";
		while (!cin.eof() && source == "")	{
			cin >> source;
		}
		while (!cin.eof() && target == "")	{
			cin >> target;
		}
		if (cin.eof())	{
			break;
		}
		test_case();
	}
}
	
