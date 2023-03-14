#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	int longNum;
	string res;
	cin >> a;

	longNum = a / 4;

	for (int i = 0; i < longNum; i++)
	{
		res += "long ";
	}

	cout << res << "int";
}
