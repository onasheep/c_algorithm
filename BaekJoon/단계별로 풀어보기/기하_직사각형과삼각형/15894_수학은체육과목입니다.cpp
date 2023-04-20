#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n;

	cin >> n;

	if (n == 1)
	{
		cout << 4;
		return 0;
	}

	cout << 3 * n + n;

	return 0;

	;
}