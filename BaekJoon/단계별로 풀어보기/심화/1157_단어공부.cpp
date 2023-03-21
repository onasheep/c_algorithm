#include<iostream>
#include<string>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int alphabet[26] = { 0 };
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
		alphabet[str[i] - 65]++;
	}

	int max = 0;
	int maxCnt = -1;
	for (int i = 0; i < 26; i++)
	{
		if (max < alphabet[i])
		{
			max = alphabet[i];
			maxCnt = i;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (i == maxCnt)
			continue;
		if (alphabet[i] == max)
		{
			cout << '?';
			return 0;
		}
	}

	cout << (char)(maxCnt + 65);
	return 0;
}