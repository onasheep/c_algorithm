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
	/// �������������� Ǫ�� ���
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
	/// �ݺ����� ���ؼ� ��� ���� ����ϴ� ���
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
