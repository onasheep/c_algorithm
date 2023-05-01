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
	int temp = 0;
	vector<int> arr;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		arr.push_back(a);

	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] != temp)
		{
			temp = arr[i];
			cout << temp << "\n";
		}
	}

	return 0;
}



