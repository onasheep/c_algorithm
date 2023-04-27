#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int x = 0; x <= 1000; x++)
	{
		for (int y = 0; y <= 1000; y++)
		{
			if (3 * x + 5 * y == n)
			{
				cout << x + y;
				return 0;
			}
		}
	}
	cout << -1;

	return 0;
}
