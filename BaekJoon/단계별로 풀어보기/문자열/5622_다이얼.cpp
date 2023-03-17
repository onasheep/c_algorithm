#include<iostream>
#include<string>

using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	int needTime = 0;

	cin >> str;


	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 65 && str[i] < 68)
		{
			needTime += 3;
		}
		if (str[i] >= 68 && str[i] < 71)
		{
			needTime += 4;
		}
		if (str[i] >= 71 && str[i] < 74)
		{
			needTime += 5;
		}
		if (str[i] >= 74 && str[i] < 77)
		{
			needTime += 6;
		}
		if (str[i] >= 77 && str[i] < 80)
		{
			needTime += 7;
		}
		if (str[i] >= 80 && str[i] < 84)
		{
			needTime += 8;
		}
		if (str[i] >= 84 && str[i] < 87)
		{
			needTime += 9;
		}
		if (str[i] >= 87 && str[i] < 91)
		{
			needTime += 10;
		}
	}

	cout << needTime;
}
