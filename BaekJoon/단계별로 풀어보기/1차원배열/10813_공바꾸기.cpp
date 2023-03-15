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

	for (int i = 1; i <= N; i++)
	{
		v[i] = i;

	}

	for (int i = 0; i < M; i++)
	{
		int temp = 0;
		int a, b;
		cin >> a >> b;
		temp = v[a];
		v[a] = v[b];
		v[b] = temp;
	}

	for (int i = 1; i <= N; i++)
	{
		cout << v[i] << " ";
	}
}
