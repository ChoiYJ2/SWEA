#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int n = 0;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int flag = 1;
		n = test_case;
		while (n)
		{
			if ((n % 10))
			{
				if (!((n % 10) % 3))
				{
					cout << "-";
					flag = 0;
				}
			}
			n /= 10;
		}
		if (flag)
			cout << test_case;
		cout << " ";
	}
	return 0;
}