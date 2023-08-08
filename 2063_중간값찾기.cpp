#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int m;
	vector<int> n;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> m;
		n.push_back(m);
	}
	sort(n.begin(), n.end());
	cout << n[T / 2];
	return 0;
}