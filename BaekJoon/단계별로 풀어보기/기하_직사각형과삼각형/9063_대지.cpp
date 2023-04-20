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
	cin >> n;

	vector<int> xDots;
	vector<int> yDots;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		xDots.push_back(x);
		yDots.push_back(y);
	}

	if (n == 1)
	{
		cout << 0;
		return 0;
	}

	sort(xDots.begin(), xDots.end());
	sort(yDots.begin(), yDots.end());

	int res = (xDots.back() - xDots.front()) * (yDots.back() - yDots.front());

	cout << res;
}
