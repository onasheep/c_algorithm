#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int num;
	int start, end;

	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());


	cin >> m;

	while (m--)
	{
		cin >> num;
		cout << binary_search(v.begin(), v.end(), num) << " ";
	}

	return 0;
}


