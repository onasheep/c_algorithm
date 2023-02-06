// 017 - 내림차순으로 자릿수 정렬하기
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;
	vector<int> A(str.size(), 0);

	for (int i = 0; i < str.size(); i++)
	{
		A[i] = stoi(str.substr(i, 1))
	}

	for (int i = 0; i < str.length(); i++)
	{
		int Max = i;
		for (int j = 0; j < str.length(); j++)
		{
			if (A[j] > A[Max]) // 내림차순이므로 최댓값을 찾음
			{
				Max = j;
			}
		}
		if (A[i] < A[Max]) // i번쨰 A값이 최댓값보다 크다면 swap 시킴
		{
			int temp = A[i];
			A[i] = A[Max];
			A[Max] = temp;
		}
	}
	for (int i = 0; i < A.size(); i++)
	{
		cout << A[i];
	}
}