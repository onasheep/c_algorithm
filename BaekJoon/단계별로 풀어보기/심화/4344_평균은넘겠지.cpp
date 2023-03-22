#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;
	cout << fixed;
	cout.precision(3);

	for (int i = 0; i < n; i++)
	{
		double count = 0;
		double sum = 0;
		double res = 0;
		int m;
		cin >> m;
		vector<double> v(m, 0);
		for (int i = 0; i < m; i++)
		{
			double score = 0;
			cin >> score;
			v.push_back(score);
			sum += score;
		}
		for (int j = 0; j < v.size(); j++)
		{
			if (v[j] > sum / (double)m)
			{
				count++;
			}
		}
		res = (count / (double)m * 100);
		cout << (round(res * 1000) / 1000) << "%" << "\n";
	}

}