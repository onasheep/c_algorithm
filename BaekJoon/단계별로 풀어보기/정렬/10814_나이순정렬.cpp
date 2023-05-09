#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareWith(const pair<int, string> a, const pair<int, string> b)
{

	return a.first < b.first;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int age;
	string name;
	vector<pair<int, string>> accounts;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> age >> name;
		accounts.push_back(make_pair(age, name));
	}

	stable_sort(accounts.begin(), accounts.end(), compareWith);

	for (int i = 0; i < n; i++)
	{
		cout << accounts[i].first << " " << accounts[i].second << "\n";
	}

	return 0;
}

