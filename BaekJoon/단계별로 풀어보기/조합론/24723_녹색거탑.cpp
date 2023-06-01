#include <iostream>

using namespace std;

int BinomialCoefficient(int a, int b)
{
	int bc = 1;
	int temp = 1;
	for (int i = a; i > 0; i--)
	{
		bc *= i;
		for (int j = 0; j <= b; j++)
		{
			temp *= j;
			temp *= b - a - j;
		}
	}

	return bc / temp;
}


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n, k;

	cin >> n >> k;

	cout << BinomialCoefficient(n, k);
	
	return 0;
}

