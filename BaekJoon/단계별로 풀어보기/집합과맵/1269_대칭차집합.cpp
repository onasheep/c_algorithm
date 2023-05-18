#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int num, res;
	int minumNum = 0;
	map <int, int> map;


	cin >> n >> m;

	res = n + m;


	for (int i = 0; i < n; i++)
	{
		cin >> num;
		map[num] = 1;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> num;
		if (map.find(num) != map.end())
		{
			minumNum++;
		}
	}



	cout << res - minumNum * 2;
	return 0;
}






