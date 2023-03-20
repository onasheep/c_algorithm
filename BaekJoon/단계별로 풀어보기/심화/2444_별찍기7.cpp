#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = n - i; j > 0; j--)
		{
			cout << " ";
		}
		for (int k = (2 * i) - 1; k > 0; k--)
		{
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " ";
		}
		for (int k = 2 * (n - i) - 1; k > 0; k--)
		{
			cout << "*";
		}
		cout << "\n";
	}



}
