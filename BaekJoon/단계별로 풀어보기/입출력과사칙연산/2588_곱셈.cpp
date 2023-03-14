#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	int res;
	cin >> a >> b;

	res = a * (b % 10);
	cout << res << "\n";
	res = a * ((b % 100) / 10);
	cout << res << "\n";
	res = a * (b / 100);
	cout << res << "\n";
	cout << a * b;

}