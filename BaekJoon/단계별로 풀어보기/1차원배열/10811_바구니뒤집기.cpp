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

	static vector<int> v(N);



	for (int i = 0; i < v.size(); i++)
	{
		v[i] = i + 1;
	}

	for (int i = 0; i < M; i++)
	{
		int start, end;
		cin >> start >> end;

		while (start < end)
		{

			int temp = 0;
			temp = v[start - 1];
			v[start - 1] = v[end - 1];
			v[end - 1] = temp;
			start++;
			end--;
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}