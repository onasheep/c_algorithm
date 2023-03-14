#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, n, a, b;
	int checkX = 0;
	cin >> x >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		checkX += (a * b);
	}
	if (checkX == x)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}
