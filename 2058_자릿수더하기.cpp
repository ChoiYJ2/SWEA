#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int T;
	int sum = 0;
	cin >> T;
	while (T > 0)
	{
		sum += T % 10;
		T /= 10;
	}
	cout << sum;
	return 0;
}