#include<iostream>
#include<vector>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v(43, 0);
	int a;
	int count = 0;

	for (int i = 1; i <= 10; i++)
	{
		cin >> a;
		v[(a % 42)] = 1;
	}

	for (int i = 0; i < v.size(); i++)
	{
		
		if (v[i] == 1)
		{
			count++;
		}
	}
	
	cout << count;;
}
