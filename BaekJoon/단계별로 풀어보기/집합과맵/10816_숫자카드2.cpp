#include <iostream>
#include <map>
using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int num;

	cin >> n;

	map <int, int> map;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		map[num]++;
	}

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> num;
		if (map.find(num) != map.end())
		{
			cout << map[num] << " ";
		}
		else
		{
			cout << 0 << " ";
		}
	}


	return 0;
}