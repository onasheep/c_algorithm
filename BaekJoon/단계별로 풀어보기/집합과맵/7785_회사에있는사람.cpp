#include <iostream>
#include <map>
#include <algorithm>
using namespace std;




int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	string name;
	string check;
	map <string, string, greater<string>> log;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> name >> check;
		log[name] = check;
	}

	for (auto iter = log.begin(); iter != log.end(); iter++)
	{
		if (iter->second == "enter")
		{
			cout << iter->first << "\n";
		}
	}
}
