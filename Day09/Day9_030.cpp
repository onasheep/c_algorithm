// 30. ���緹�� �����
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
	vector<int> A(N);
	int start = 0;
	int end = 0;

	for (size_t i = 0; i < N; i++)
	{
		cin >> A[i];
		if (start < A[i])
		{
			start = A[i];  // ���� �ִ��� ���� �ε����� ����
		}
		end = end + A[i];  // ��� ������ ���� ���� �ε����� ����
	}


	while ( start <= end)
	{
		int middle = (start + end) / 2;
		int sum = 0;
		int count = 0;

		// middle������ ��� ������ ������ �� �ִ��� Ȯ��
		for (int i = 0; i < N; i++)
		{
			if (sum + A[i] > middle)
			{
				count++;
				sum = 0;
			}
			sum = sum + A[i];
		}
		if (sum != 0)
		{
			count++;
		}
		if (count > M)
		{
			start = middle + 1;
		}
		else
		{
			end = middle - 1;
		}
	}
	cout << start << "\n";
}