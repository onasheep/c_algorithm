#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, a, temp;
	int res = 0;
	vector<int> treeRange;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (i != 0)
		{
			treeRange.push_back(a - temp);
		}
		temp = a;
	}

	temp = gcd(treeRange[0], treeRange[1]);

	for (int i = 2; i < treeRange.size(); i++)
	{
		temp = gcd(temp, treeRange[i]);
	}

	for (int i = 0; i < treeRange.size(); i++)
	{
		res += treeRange[i] / temp - 1;
	}

	cout << res;

	return 0;
}