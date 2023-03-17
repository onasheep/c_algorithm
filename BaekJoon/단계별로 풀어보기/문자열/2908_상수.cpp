#include<iostream>
#include<string>

using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str1;
	string str2;


	char temp;

	cin >> str1 >> str2;

	temp = str1[0];
	str1[0] = str1[str1.length() - 1];
	str1[str1.length() - 1] = temp;

	temp = str2[0];
	str2[0] = str2[str2.length() - 1];
	str2[str2.length() - 1] = temp;

	if (stoi(str1) > stoi(str2))
	{
		cout << str1;
	}
	else
	{
		cout << str2;
	}

}
