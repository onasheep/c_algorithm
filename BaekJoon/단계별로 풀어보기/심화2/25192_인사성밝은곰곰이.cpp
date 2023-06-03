#include <iostream>
#include <set>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int answer = 0;
	set<string> chat;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		if (str == "ENTER")
		{
			answer += chat.size();
			chat.clear();
		}
		else
		{
			chat.insert(str);
		}
	}
	answer += chat.size();

	cout << answer;
}