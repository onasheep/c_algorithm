#include<iostream>
using namespace std;

string str;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n;

	cin >> str;
	cin >> n;

	for (int i = 1; i <= str.length(); i++)
	{
		if (i == n)
		{
			cout << str[i - 1];
		}
	}
	return 0;
}
