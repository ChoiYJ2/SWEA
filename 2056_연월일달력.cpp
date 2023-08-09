#include<iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	string n;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> n;
		int m = stoi(n);
		int mon = (m % 10000) / 100;
		int day = m % 100;
		cout << "#" << test_case << " ";
		if (day < 1 or mon < 1)
		{
			cout << "-1\n";
			continue;
		}
		if (mon == 2)
		{
			if (day <= 28)
			{
				n.insert(4, "/");
				n.insert(7, "/");
				cout << n << "\n";
				continue;
			}
		}
		else if (mon <= 7)
		{
			if (mon % 2 == 0)
			{
				if (day <= 30)
				{
					n.insert(4, "/");
					n.insert(7, "/");
					cout << n << "\n";
					continue;
				}
			}
			else
			{
				if (day <= 31)
				{
					n.insert(4, "/");
					n.insert(7, "/");
					cout << n << "\n";
					continue;
				}
			}
		}
		else
		{
			if (mon % 2 == 1)
			{
				if (day <= 30)
				{
					n.insert(4, "/");
					n.insert(7, "/");
					cout << n << "\n";
					continue;
				}
			}
			else
			{
				if (day <= 31)
				{
					n.insert(4, "/");
					n.insert(7, "/");
					cout << n << "\n";
					continue;
				}
			}
		}
		cout << "-1\n";
	}
	return 0;
}