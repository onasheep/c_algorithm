#include <iostream>
using namespace std;

bool BigOCheck(int a1, int a0, int c, int n0)
{
	for (int i = n0; i <= 100; i++)
	{
		if (a1 * i + a0 > c * i)
		{
			return false;
		}
	}
	return true;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int a1, a0, c, n0;
	cin >> a1 >> a0 >> c >> n0;

	if (BigOCheck(a1, a0, c, n0))
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}

	return 0;
}

