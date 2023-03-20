#include<iostream>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	int arr[101];
	for (int i = 1; i <= 100; i++)
	{
		arr[i] = i;
	}

	int begin, end, mid;

	for (int i = 0; i < m; i++)
	{
		cin >> begin >> end >> mid;
		int start = begin;
		int temp[101] = { 0 };
		for (int j = begin; j < mid; j++)
		{
			temp[j] = arr[j];
		}
		for (int j = mid; j <= end; j++)
		{
			arr[start] = arr[j];
			start++;
		}

		for (int j = begin; j < mid; j++)
		{
			arr[start] = temp[j];
			start++;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}