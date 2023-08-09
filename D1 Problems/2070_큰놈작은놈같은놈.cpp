#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int n1 = 0;
	int n2 = 0;
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> n1;
		cin >> n2;
		cout << "#" << test_case << " ";
		if (n1 > n2)
			cout << ">\n";
		else if (n1 == n2)
			cout << "=\n";
		else
			cout << "<\n";
	}
	return 0;
}