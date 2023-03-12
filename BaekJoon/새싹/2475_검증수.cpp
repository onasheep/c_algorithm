#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	long long squareSum = 0;
	int res = 0;

	while (cin >> a)
	{
		squareSum += (a * a);
	}

	res = (int)(squareSum % 10);

	cout << res;
}