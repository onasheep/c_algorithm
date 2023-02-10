// 45. Ax + By = C
#include<iostream>
#include<vector>
using namespace std;

long gcd(long a, long b);
vector<long> Execute(long a, long b);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long a, b, c;
	cin >> a >> b >> c;
	long tgcd = gcd(a, b);

	if (c % tgcd != 0)
	{
		cout << -1 << "\n";
	}
	else
	{
		int mok = (int)(c / tgcd);
		vector<long> ret = Execute(a, b);
		cout << ret[0] * mok << " " << ret[1] * mok;
	}
}

vector<long> Execute(long a, long b) // 확장 유클리드 호재법 
{
	vector<long> ret(2);  // x y 짝을 담을 vector

	if (b == 0)
	{
		ret[0] = 1;
		ret[1] = 0;
		return ret;
	}
	long q = a / b;
	vector<long> v = Execute(b, a % b); // 재귀형태로 호제법 수행
	ret[0] = v[1]; // 역으로 올라오면서 x, y 값을 계산하는 로직
	ret[1] = v[0] - v[1] * q;
	return ret;
}


long gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}