#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
	if (num <= 1)
	{
		return false;
	}
	int sqrtNum = sqrt(num);
	for (int i = 2; i <= sqrtNum; i++)
	{
		if (num % i == 0)
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
	int sum = 0;
	int count = 0;
	int smallPrime = 0;
	bool smallPrimeCheck = false;
	cin >> m >> n;

	for (int i = m; i <= n; i++)
	{

		if (isPrime(i))
		{
			if (!smallPrimeCheck)
			{
				smallPrime = i;
				smallPrimeCheck = true;
			}
			sum += i;
		}
		else
		{
			count++;
		}
	}
	if (count == n - m + 1)
	{
		cout << -1;
	}
	else
	{
		cout << sum << "\n" << smallPrime;
	}
	return 0;
}