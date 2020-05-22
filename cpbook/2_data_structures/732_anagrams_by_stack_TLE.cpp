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
#include <map>

using namespace std;
using namespace std::chrono;

string source, target;
int n;
bitset<32> solution;
vector<string> solutions;
vector<string> result;
map<int, vector<string>> cache;

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

void test_case()
{
	if (!are_anagrams())	{
		cout << "[\n]\n";
		return;
	}
	n = source.size();
	if (cache.count(n) == 0)	{
		solutions.clear();
		solution.reset();
		solution.set(0);
		generate(1, 1, 0);
		cache[n] = solutions;
	}	else	{
		solutions = cache[n];
	}
	get_result();
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
//	auto start = high_resolution_clock::now();
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

	for (auto it = cache.begin(); it != cache.end(); it++)	{
		cout << it->first << endl;
		for (auto& at : it->second)	{
			cout << at << endl;
		}
		cout << endl;
	}


/*
	auto stop = high_resolution_clock::now();
	auto duration_nanoseconds = duration_cast<nanoseconds>(stop - start);
	cout << "--- " << duration_nanoseconds.count() << " --- nanoseconds\n";
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "--- " << duration.count() << " --- microseconds\n";
	auto duration_milliseconds = duration_cast<milliseconds>(stop - start);
	cout << "--- " << duration_milliseconds.count() << " --- milliseconds\n";
	auto duration_seconds = duration_cast<seconds>(stop - start);
	cout << "--- " << duration_seconds.count() << " --- seconds\n";
*/
}
	
