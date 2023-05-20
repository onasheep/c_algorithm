#include <iostream>
using namespace std;


int gcd(int a, int b) {
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}

}

int main() {
	int t;
	int a, b;
	int lcd;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		lcd = a * b / (gcd(a, b));
		cout << lcd << "\n";
	}

	return 0;
}
