#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n;
	vector<int> v;


	cin >> t;
	v.resize(t);

	for (int i = 0; i < t; i++)
	{
		int a;
		cin >> a;
		v[i] = a;
	}

	sort(v.begin(), v.end());

	cout << v.front() * v.back();
}