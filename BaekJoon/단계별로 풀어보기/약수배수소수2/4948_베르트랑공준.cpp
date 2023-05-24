#include <iostream>
#include <cmath>
using namespace std;

int arr[246913];

bool isPrime(int a)
{
	if (a <= 1)
	{
		return false;
	}
	if (a == 2)
	{
		return true;
	}
	for (int i = 2; i < sqrt(a) + 1; i++)
	{
		if (a % i == 0)
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

	int n;

	for (int i = 1; i <= 246912; i++)
	{
		if (isPrime(i))
		{
			arr[i] = 1;
		}
	}

	while (true)
	{
		cin >> n;

		if (!n)
		{
			break;
		}

		int count = 0;

		for (int i = n + 1; i <= 2 * n; i++)
		{
			if (arr[i] == 1)
			{
				count += arr[i];
			}
		}

		cout << count << "\n";
	}

	return 0;
}