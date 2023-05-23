#include <iostream>
#include <cmath>

using namespace std;


bool CheckPrime(int m)
{
	if (m == 1)
	{
		return false;
	}

	for (int i = 2; i < sqrt(m) + 1; i++)
	{
		if (m == 2)
		{
			return true;
		}
		else if (m % i == 0)
		{
			return false;
		}

	}
	return true;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, n;

	cin >> m >> n;

	while (m <= n)
	{
		if (CheckPrime(m))
		{
			cout << m << "\n";
			m++;

		}
		else
		{
			m++;
		}
	}


	return 0;
}