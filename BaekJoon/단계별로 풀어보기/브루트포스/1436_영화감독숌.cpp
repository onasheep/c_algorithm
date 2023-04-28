#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int cnt = 0;
	int res = 0;
	int temp;
	cin >> n;
	while (cnt != n)
	{
		res++;
		temp = res;
		while (temp != 0)
		{
			if (temp % 1000 == 666)
			{
				cnt++;
				break;
			}
			else
			{
				temp /= 10;
			}
		}
	}
	cout << res;
	return 0;
}