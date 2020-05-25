// UVa 735 - Dart-a-Mania
// https://onlinejudge.org/external/7/735.pdf

#include <iostream>
#include <set>
#include <vector>

using namespace std;

typedef unsigned long long int ulli;

set<int> scores_table;

void initialize_scores_table()
{
	int n = 20;
	scores_table.insert(50);
	for (int i = 1; i <= 3; i++)	{
		for (int j = 0; j <= n * i; j += i)	{
			scores_table.insert(j);
		}
	}
}

void test_case(int score)
{
	set<ulli> combinations;
	ulli bit_x, bit_y, bit_z;
	int permutations = 0;

	for (auto x : scores_table)	{
		for (auto y : scores_table)	{
			for (auto z : scores_table)	{
				if (x + y + z == score)	{
					permutations++;
					bit_x = (ulli)(1) << x;
					bit_y = (ulli)(1) << y;
					bit_z = (ulli)(1) << z;
					// combinations.insert((1 << x) | (1 << y) | (1 << z));
					combinations.insert(bit_x | bit_y | bit_z);
				}
			}
		}
	}
	if (permutations == 0 && combinations.size() == 0)	{
		cout << "THE SCORE OF " << score << " CANNOT BE MADE WITH THREE DARTS.\n";
	}	else	{
		cout << "NUMBER OF COMBINATIONS THAT SCORES " << score << " IS " << combinations.size() << ".\n";
		cout << "NUMBER OF PERMUTATIONS THAT SCORES " << score << " IS " << permutations << ".\n"; 
	}
	for (int i = 0; i < 70; i++)	{
		cout << "*";
	}
	cout << "\n";
}

int main()
{
	int score;

	ios::sync_with_stdio(0);
	cin.tie(0);
	initialize_scores_table();
	while (cin >> score)	{
		if (score <= 0)	{
			break;
		}
		test_case(score);
	}
	cout << "END OF OUTPUT\n";
	
	return 0;
}

