// UVa 11136 - Hoax or what
// https://onlinejudge.org/external/111/11136.pdf

#include <iostream>
#include <list>
#include <set>
#include <algorithm>

using namespace std;

void test_case(int n)
{
	multiset<long long> bills;
	long long total_amount = 0;
	long long k, bill, lowest_bill, highest_bill;
	long long erased;

	while (n--)	{
		cin >> k;
		while (k--)	{
			cin >> bill;
			bills.insert(bill);
		}
		lowest_bill = *(bills.begin());
		erased = bills.erase(lowest_bill);
		if (erased > 1)	{
			while(--erased)	{
				bills.insert(lowest_bill);
			}
		}
		highest_bill = *(bills.rbegin());
		erased = bills.erase(highest_bill);
		if (erased > 1)	{
			while(--erased)	{
				bills.insert(highest_bill);
			}
		}
		total_amount += highest_bill - lowest_bill;
	}
	cout << total_amount << "\n";
}

void test_case_list(int n)
{
	list<long long> bills;
	long long total_amount = 0;
	long long k, bill, lowest_bill, highest_bill;

	while (n--)	{
		cin >> k;
		while (k--)	{
			cin >> bill;
			bills.push_back(bill);
		}
		bills.sort();
		lowest_bill = bills.front();
		bills.pop_front();
		highest_bill = bills.back();
		bills.pop_back();
		total_amount += highest_bill - lowest_bill;
	}
	cout << total_amount << "\n";
}

int main()
{
	int n;

	ios::sync_with_stdio(0);
	cin.tie(0);
	while (cin >> n)	{
		if (n == 0)	{
			break;
		}
		test_case(n);
	}
	return 0;
}
