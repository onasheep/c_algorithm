#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	vector<int> lines;
	for (int i = 0; i < 3; i++)
	{
		cin >> a;
		lines.push_back(a);
	}

	sort(lines.begin(), lines.end());


	if (lines[2] < lines[0] + lines[1])
	{
		cout << lines[0] + lines[1] + lines[2];
	}
	else
	{
		cout << 2 * (lines[0] + lines[1]) - 1;
	}
	return 0;
}

