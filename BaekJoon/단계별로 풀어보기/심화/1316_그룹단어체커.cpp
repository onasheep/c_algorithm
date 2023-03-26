#include<iostream>
#include<string>	
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int count = n;

	for (int i = 0; i < n; i++)
	{
		bool alphabet[26] = { false };

		string str;
		cin >> str;

		for (int j = 0; j < str.length(); j++)
		{
			int index = str[j] - 'a';
			if (!alphabet[index])
			{
				alphabet[index] = true;
			}
			else if (alphabet[index] && (str[j] != str[j - 1]))
			{
				count--;
				break;
			}
		}
	}
	cout << count;
	return 0;
}