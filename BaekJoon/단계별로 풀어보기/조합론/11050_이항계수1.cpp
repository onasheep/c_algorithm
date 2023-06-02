#include <iostream>

using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n, k;
	int fTemp = 1;
	int eTemp = 1;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		fTemp *= i;
	}

	for (int i = 1; i <= k; i++)
	{
		eTemp *= i;
	}

	for (int i = 1; i <= n - k; i++)
	{
		eTemp *= i;
	}

	cout << fTemp / eTemp;



	return 0;
}