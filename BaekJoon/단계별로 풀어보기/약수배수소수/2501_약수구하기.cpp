#include <iostream>
#include <vector>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	int count = 0;
	cin >> n >> k;
	vector<int> arr;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			arr.push_back(i);
			count++;
		}
	}

	if (count < k)
	{
		cout << 0;
	}
	else
	{
		cout << arr[k - 1];
	}

}