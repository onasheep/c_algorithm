#include<iostream>
#include<string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	string str;
	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> str;
		
		cout << str[0] << str[str.length() - 1] << "\n";
				
	}
	return 0;
}