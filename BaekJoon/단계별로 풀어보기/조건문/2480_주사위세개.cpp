#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	int reward;

	cin >> a >> b >> c;

	if (a == b && b == c)
	{
		reward = 10000 + (a * 1000);
	}
	else if (a == b || b == c || c == a)
	{
		int sameNum = 0;
		if (a == b)
		{
			sameNum = a;
		}
		else if (b == c)
		{
			sameNum = b;
		}
		else
		{
			sameNum = c;
		}
		reward = 1000 + (sameNum * 100);
	}
	else
	{
		// algorithm의  max를 사용하는 경우
		int maxNum = max({ a, b, c });
		// cmath의 max를 사용하는 경우
		/*int maxNum = max(a, max(b, c));*/
		reward = maxNum * 100;
	}

	cout << reward;
}