#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x, y;
	vector<pair<int, int>> arr;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		arr.push_back(make_pair(x, y));
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < n; i++)
	{
		cout << arr[i].first << " " << arr[i].second << "\n";
	}


	return 0;
}

