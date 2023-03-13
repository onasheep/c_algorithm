#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int h, m, cookMin;

	cin >> h >> m >> cookMin;

	int totalMin = m + cookMin;

	while (totalMin >= 60)
	{
		totalMin -= 60;
		h++;
		if (h == 24)
		{
			h = 0;
		}

	}
	m = totalMin;
	cout << h << " " << m;
}