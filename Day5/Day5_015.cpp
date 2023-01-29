// 015 - 수 정렬하기1
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
			// A[j] 와 A[j+1] 값을 비교하여 A[j]가 큰 경우 swap
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