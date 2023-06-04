#include <iostream>
#include <stack>
using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k, n;
	int answer = 0;
	stack<int> s;

	cin >> k;

	for (int i = 0; i < k; i++)
	{
		cin >> n;
		if (n != 0)
		{
			s.push(n);
		}
		else
		{
			s.pop();
		}
	}

	while (!s.empty())
	{
		answer += s.top();
		s.pop();
	}

	cout << answer;

	return 0;
}
