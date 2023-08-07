#include<iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	char na;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		string n;
		for (int i = 0; i < 30; i++)
		{
			cin >> na;
			n += na;
		}
		string ck;
		for (int i = 0; i < n.size(); i++)
		{
			if (ck.empty())
				ck = n[i];
			else
			{
				if (ck[0] == n[i])
				{

					if (ck == n.substr(i, ck.size()))
					{
						cout << "#" << test_case << " " << ck.size() << "\n";
						break;
					}
				}
				ck += n[i];
			}
		}
	}
	return 0;
}