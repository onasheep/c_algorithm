#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	int length;
	int cutline;
	cin >> n >> k;

	vector<int> arr;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}

	length = arr.size();
	sort(arr.begin(), arr.end());
	cutline = length - k;
	cout << arr[cutline];


	return 0;
}

