#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	while (true)
	{
		cin >> a >> b >> c;
		if (a == 0)
		{
			return 0;
		}
		int sum = a + b + c;
		int maxNum = max(max(a, b), c);
		if (sum - maxNum <= maxNum)
		{
			cout << "Invalid" << "\n";
			continue;
		}
		if (a == b && b == c && c == a)
		{
			cout << "Equilateral" << "\n";
		}
		else if (a == b || b == c || c == a)
		{
			cout << "Isosceles" << "\n";
		}
		else if (a != b && b != c && c != a)
		{
			cout << "Scalene" << "\n";
		}
	}

}