#include<iostream>
#include<vector>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int max = 0;
	float sum = 0;
	cin >> N;

	vector<float> v(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
		if (v[i] > max)
		{
			max = v[i];
		}
	}

	for (int i = 0; i < N; i++)
	{
		sum += ((v[i] / max) * 100);
	}
	cout << (sum / N);
	return 0;
}