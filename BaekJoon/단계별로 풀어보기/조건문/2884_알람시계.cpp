#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int h, m;
	int minusMin = 45;

	cin >> h >> m;

	if ((m - minusMin) < 0)
	{
		int resM = abs(m - minusMin);
		h--;
		if (h < 0)
		{
			h = 23;
		}

		cout << h << " " << 60 - resM;
	}
	else
	{
		cout << h << " " << (m - minusMin);
	}
}
