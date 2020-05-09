#include <iostream>
#include <map>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int t, total;
	string s;
	map<string, int> species;

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;
	cin.ignore();
	getline(cin, s);
	while (t-- > 0)	{
		total = 0;
		species.clear();
		while (getline(cin, s))	{
			if (s == "")	{
				break;
			}
			total++;
			species[s]++;
		}
		// cout << fixed;
		for (auto a = species.begin(); a != species.end(); ++a)	{
			// cout << a->first << ", " << setprecision(4) 
			//	<< a->second / (double)total << endl;
			printf("%s %.4f\n", a->first.c_str(),  
								a->second / (double)total * 100);
		}
		if (t > 0)	{
			printf("\n");
		}
	}

	return 0;
}
