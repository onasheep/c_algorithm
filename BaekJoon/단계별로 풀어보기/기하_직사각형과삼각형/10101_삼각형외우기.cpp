#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	int sum = a + b + c;

	if (a == 60 && b == 60 && c == 60)
	{
		cout << "Equilateral";
		return 0;
	}

	if (sum == 180)
	{
		if (a != b && b != c && c != a)
		{
			cout << "Scalene";
		}
		if (a == b || b == c || c == a)
		{
			cout << "Isosceles";
		}

	}
	else
	{
		cout << "Error";
	}

	return 0;

}