#include<iostream>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[10];
	int max = 0;
	int maxIndex = 0;

	for (int i = 1; i < 10; i++)
	{
		cin >> arr[i];
		if (max < arr[i])
		{
			max = arr[i];
			maxIndex = i;
		}
	}

	cout << max << "\n" << maxIndex;

}