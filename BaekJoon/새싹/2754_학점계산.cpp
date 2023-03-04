#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	double res = 0;

	cin >> str;

	cout.precision(1);
	cout << fixed;



	switch (str[0])
	{
	case 'A':
		res += 4.0;
		break;
	case 'B':
		res += 3.0;
		break;
	case 'C':
		res += 2.0;
		break;
	case 'D':
		res += 1.0;
		break;
	default:
		res = 0.0;
		break;
	}

	switch (str[1])
	{
	case '+':
		res += 0.3;
		break;
	case '-':
		res -= 0.3;
		break;
	default:
		break;
	}

	cout << res;

}