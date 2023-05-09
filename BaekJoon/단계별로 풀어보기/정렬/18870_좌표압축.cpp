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
	int x;
	vector<int> xPos;
	vector<int> res;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		xPos.push_back(x);
	}

	res = xPos;

	sort(res.begin(), res.end());
	res.erase(unique(res.begin(), res.end()), res.end());

	for (int i = 0; i < n; i++)
	{
		auto it = lower_bound(res.begin(), res.end(), xPos[i]);
		cout << it - res.begin() << " ";
	}

	return 0;
}