// TCArg 2020 - Contest #9
// Eugeny and Play List
// https://codeforces.com/group/j1UosVRZar/contest/288666/problem/K

#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int find_song(vector<tuple<int, int, int>>& play_list, int moment)
{
	int n = play_list.size();
	int left = 0;
	int right = n - 1;
	int result = -1;

	while (left <= right)	{
		int mid = left + (right - left) / 2;
		if (get<1>(play_list[mid]) <= moment && moment <= get<2>(play_list[mid]))	{
			result = get<0>(play_list[mid]);
			break;
		}
		else if (moment < get<1>(play_list[mid]))	{
			right = mid - 1;
		}
		else	{
			left = mid + 1;
		}
	}
	return result;
}

int main()
{
	int n, m;
	vector<tuple<int, int, int>> play_list;
	int ci, ti, vi, current_time, start_time, end_time;

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	current_time = 1;
	for (int i = 0; i < n; i++)	{
		cin >> ci >> ti;
		start_time = current_time;
		end_time = start_time + ci * ti - 1;
		play_list.push_back(make_tuple(i + 1, start_time, end_time));
		current_time = end_time + 1;
	}
	for (int i = 0; i < m; i++)	{
		cin >> vi;
		cout << find_song(play_list, vi) << "\n";
	}
	return 0;
}


