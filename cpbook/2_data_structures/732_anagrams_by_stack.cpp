// UVa 732 - Anagrams by Stack
// https://onlinejudge.org/external/7/732.pdf

#include <iostream>
#include <bitset>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <chrono>

using namespace std;

string source, target;
int n;
bitset<32> solution;
vector<string> solutions;
vector<string> result;

bool is_valid(const string& sol)	
{
	stack<char> st;
	queue<char> qt;
	string rt = "";

	for (auto c : source)	{
		qt.push(c);
	}
	for (auto c : sol)	{
		if (c == 'i')	{		// push
			if (qt.empty())	{
				return false;
			}
			st.push(qt.front());
			qt.pop();
		}
		else if (c == 'o') 	{			//	pop
			if (st.empty())	{
				return false;
			}
			rt += st.top();
			st.pop();
		}
	}
	if (rt == target)	{
		return true;
	}	else	{
		return false;
	}
}

void generate(int k, int i, int o)	
{
	if (o > i || i > n)	{
		return;
	}
	if (k == n * 2)	{
		string sol = "";
		for (int i = 0; i < k; i++)	{
			sol += (solution.test(i) ? "i" : "o");
			sol += (i < k - 1 ? " " : "");
		}
		solutions.push_back(sol);
	}	else	{
		solution.set(k);
		generate(k + 1, i + 1, o);
		solution.reset(k);
		generate(k + 1, i, o + 1);
	}
}

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

void print_result()
{
	cout << "[\n";
	for (auto r : result)	{
		cout << r << "\n";
	}
	cout << "]\n";
}

void get_result()
{
	result.clear();
	for (auto s : solutions)	{
		if (is_valid(s))	{
			result.push_back(s);
		}
	}
	sort(result.begin(), result.end());
	print_result();
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
		for (auto p : path)	{
			cout << p;
		}
		cout << endl;
	}	else	{
		if (i < n)	{
			build_path(path, st, 'i', ci, co, i, o);
		}	else	{
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
	vector<char> p;
	stack<char> s;
	build_path(p, s, 'i', 0, 0, 0, 0);
	/*
	n = source.size();
	solution.reset();
	solution.set(0);
	generate(1, 1, 0);
	get_result();
	*/
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
	
