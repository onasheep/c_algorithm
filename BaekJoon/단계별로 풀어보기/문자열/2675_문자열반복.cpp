#include<iostream>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	while (T > 0)
	{
		int R;
		string str;
		cin >> R >> str;
		for (int i = 0; i < str.length(); i++)
		{
			for (int j = 0; j < R; j++)
			{
				cout << str[i];
			}

		}
		cout << "\n";
		T--;
	}
}

