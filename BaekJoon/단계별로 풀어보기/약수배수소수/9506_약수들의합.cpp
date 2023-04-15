#include <iostream>
#include <vector>;
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	int index = 0;

	while (true)
	{
		cin >> n;

		if (n == -1)
		{
			return 0;
		}

		int sum = 0;
		vector<int> factors;

		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				sum += i;
				factors.push_back(i);
			}
		}
		if (sum == n)
		{
			cout << n;
			int index = 0;
			while (index < factors.size())
			{
				if (index == 0)
				{
					cout << " = " << factors[index];
				}
				else if (index == factors.size() - 1)
				{
					cout << " + " << factors[index] << "\n";
				}
				else
				{
					cout << " + " << factors[index];
				}
				index++;

			}
		}
		else
		{
			cout << n << " is NOT perfect." << "\n";
		}
	}

}