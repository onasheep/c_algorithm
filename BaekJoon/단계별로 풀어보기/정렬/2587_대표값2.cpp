#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int sum = 0;
	vector<int> arr;

	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		arr.push_back(n);
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}

	cout << sum / 5 << "\n";
	cout << arr[2];


	return 0;
}
