#include <iostream>
#include <map>
#include <algorithm>
using namespace std;




int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, count = 0;
	string str;
	map <string, bool> strings;

	cin >> n >> m;


	for (int i = 0; i < n; i++)
	{
		cin >> str;
		strings[str] = true;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> str;
		if (strings[str])
		{
			count++;
		}
	}


	cout << count;
}

