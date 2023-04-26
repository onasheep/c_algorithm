#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c, d, e, f;
	int x, y;

	cin >> a >> b >> c >> d >> e >> f;

	/// <summary>
	/// 연립방정식으로 푸는 방법
	/// </summary>
	/// <returns></returns>
	x = (c * e - b * f) / (a * e - b * d);
	if (b == 0)
	{
		y = (f - d * x) / e;
	}
	else
	{
		y = (c - a * x) / b;
	}

	cout << x << " " << y;

	/// <summary>
	/// 반복문을 통해서 모든 값을 고려하는 방법
	/// </summary>
	/// <returns></returns>
	//for (int x = -999; x <= 999; x++)
	//{
	//	for (int y = -999; y <= 999; y++)
	//	{
	//		if ((a * x + b * y == c) && (d * x + e * y == f))
	//		{
	//			cout << x << " " << y;
	//		}
	//	}
	//}

	return 0;
}
