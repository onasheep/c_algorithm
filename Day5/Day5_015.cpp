// 015 - �� �����ϱ�1
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<int> A(N, 0);

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N -1 - i; j++)
		{
			// A[j] �� A[j+1] ���� ���Ͽ� A[j]�� ū ��� swap
			if (A[j] > A[j + 1])
			{
				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = A[j];
			}
			
		}

		for (int i = 0; i < N; i++)
		{
			cout << A[i] << '\n';
		}
	}

}