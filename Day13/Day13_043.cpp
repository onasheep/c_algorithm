// 42. 최대 공약수 구하기
#include<iostream>
using namespace std;

int gdc(long a, long b);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long a, b;
	cin >> a >> b;
	long result = gdc(a, b);

	while (result > 0)
	{
		cout << 1;
		result--;
	}
	cout << "\n";
}

int gdc(long a, long b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gdc(b, a % b);
	}
}