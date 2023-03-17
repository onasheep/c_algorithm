#include<iostream>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int sum = 0;
	string str;

	cin >> N;
	cin >> str;

	for (int i = 0; i < N; i++)
	{
		sum += str[i] - '0';
	}
	cout << sum;

}

