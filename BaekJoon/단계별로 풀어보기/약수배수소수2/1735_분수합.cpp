#include <iostream>
using namespace std;

int gcd(int a, int b)
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

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c, d;
	int numerator;
	int denominator;
	int res1;
	int res2;

	cin >> a >> b >> c >> d;

	denominator = b * d;
	numerator = (a * d) + (c * b);


	res2 = denominator / gcd(denominator, numerator);
	res1 = numerator / gcd(denominator, numerator);


	cout << res1 << " " << res2;



	return 0;
}