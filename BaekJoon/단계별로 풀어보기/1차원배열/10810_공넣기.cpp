#include<iostream>
#include<vector>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);



	int N, M;
	cin >> N >> M;
	vector<int> v(N + 1);

	for (int i = 0; i < M; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		for (int j = a; j <= b; j++)
		{
			v[j] = c;
		}

	}

	for (int i = 1; i <= N; i++)
	{
		cout << v[i] << " ";
	}
}
