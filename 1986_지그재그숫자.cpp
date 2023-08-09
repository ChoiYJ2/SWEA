#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int n, i;
	int sum;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> n;
		sum = 0;
		for (i = 1; i <= n; ++i)
		{
			if (i % 2 == 0)
				sum -= i;
			else
				sum += i;
		}
		cout << "#" << test_case << " " << sum << "\n";
	}
	return 0;
}