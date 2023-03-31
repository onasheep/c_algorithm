#include<iostream>
#include <vector>
using namespace std;

int arr[100][100];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x, y;
	int count = 0;
	cin >> n;



	while (n--)
	{
		cin >> x >> y;
		for (int i = y; i < y + 10; i++)
		{
			for (int j = x; j < x + 10; j++)
			{
				if (!arr[i][j])
				{
					count++;
					arr[i][j] = 1;
				}
			}
		}
	}
	cout << count;
}