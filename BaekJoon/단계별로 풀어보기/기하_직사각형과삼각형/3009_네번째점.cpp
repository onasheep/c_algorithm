#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y;

	vector<int> xDots;
	vector<int> yDots;

	for (int i = 0; i < 3; i++)
	{
		cin >> x >> y;
		xDots.push_back(x);
		yDots.push_back(y);
	}

	if (xDots.front() == xDots.back())
	{
		cout << xDots[1] << " ";
	}
	else if (xDots[1] == xDots.back())
	{
		cout << xDots.front() << " ";
	}
	else
	{
		cout << xDots.back() << " ";
	}
	if (yDots.front() == yDots.back())
	{
		cout << yDots[1];
	}
	else if (yDots[1] == yDots.back())
	{
		cout << yDots.front();
	}
	else
	{
		cout << yDots.back();
	}


	;
}