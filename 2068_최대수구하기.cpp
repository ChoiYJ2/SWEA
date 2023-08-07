#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int n;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int max = 0;
		for (int i = 0; i < 10; i++)
		{
			cin >> n;
			if (max < n)
				max = n;
		}
		cout << "#" << test_case << " " << max << "\n";
	}
	return 0;
}