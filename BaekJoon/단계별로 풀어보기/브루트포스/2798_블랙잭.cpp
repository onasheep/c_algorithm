#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int count = 0;
	int sum, max = 0;
	vector<int> cards;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		cards.push_back(x);
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum = cards[i] + cards[j] + cards[k];
				if (sum <= m && sum > max)
				{
					max = sum;
				}
			}
		}
	}
	cout << max;
	return 0;
}
