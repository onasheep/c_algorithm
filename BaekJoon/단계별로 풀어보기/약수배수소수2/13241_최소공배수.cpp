#include <iostream>
using namespace std;


int gcd(long long int a, long long int b) {
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

	long long int a, b;
	long long int lcd;

	cin >> a >> b;
	lcd = a * b / (gcd(a, b));
	cout << lcd << "\n";


	return 0;
}