#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int count = 1;
	string res;
	cin >> n;

	while (count <= n)
	{
		res = "";
		for (int i = 0; i < n; i++)
		{

			if (i >= n - count)
			{
				res += '*';
			}
			else
			{
				res += ' ';
			}
		}
		cout << res << "\n";
		count++;
	}
}
