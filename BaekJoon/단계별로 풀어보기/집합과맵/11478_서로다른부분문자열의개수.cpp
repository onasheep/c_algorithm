#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	string str;
	set <string> s;

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		string temp = "";
		for (int j = i; j < str.length(); j++)
		{
			temp += str[j];
			s.insert(temp);
		}

	}

	cout << s.size();


	return 0;
}