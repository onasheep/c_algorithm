#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int wGap = w - x;
	int hGap = h - y;


	if (min(x, y) >= min(wGap, hGap))
	{
		cout << min(wGap, hGap);
	}
	else
	{
		cout << min(x, y);
	}
}