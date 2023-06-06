#include <iostream>
using namespace std;

long long Factorial(long long n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * Factorial(n - 1);
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	if (n == 0)
	{
		cout << 1;
	}
	else
	{
		cout << Factorial(n);
	}

	return 0;
}