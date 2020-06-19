// UVa 481 - What Goes Up
// https://onlinejudge.org/external/4/481.pdf

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void lis(vector<int>& sequence)
{
	int n = sequence.size();
	int prev[n], length[n];
	int longest = 0;
	stack<int> st;

	for (int k = 0; k < n; k++)	{
		length[k] = 1;
		prev[k] = -1;
		for (int i = 0; i < k; i++)	{
			if (sequence[i] < sequence[k])	{
				if (length[i] + 1 >= length[k])	{
					length[k] = length[i] + 1;
					prev[k] = i;
				}
			}
		}
		if (length[k] >= length[longest])	{
			longest = k;
		}
	}
	int i = longest;
	while (i != -1)	{
		st.push(sequence[i]);
		i = prev[i];
	}
	cout << length[longest] << "\n";
	cout << "-\n";
	while (!st.empty())	{
		cout << st.top() << "\n";
		st.pop();
	}
}

	

int main()
{
	vector<int> sequence;
	int num;

	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin >> num)	{
		sequence.push_back(num);
	}
	lis(sequence);
	return 0;
}
