#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int count = 0;
	string name;

	cin >> n >> m;

	map <string, bool> map;
	vector<string > v;
	for (int i = 0; i < n + m; i++)
	{
		cin >> name;
		if (map[name] == true)
		{
			count++;
			v.push_back(name);
		}

		map[name] = true;
	}

	cout << count << "\n";

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}


	return 0;
}