// 38. 거의 소수 구하기
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long Min, Max;
	cin >> Min >> Max;
	long A[10000001];

	for (int i = 2; i < 10000001; i++)
	{
		A[i] = i;
	}
	for (int i = 2; i < sqrt(10000001); i++)  // 제곱근 까지만 수행
	{
		if (A[i] == 0)
		{
			continue;
		}
		for (int j = i + i; j < 10000001; j = j + i)  // 배수 지우기
		{
			A[j] = 0;
		}
	}

	int count = 0;

	for (int i = 2; i < 10000001; i++)
	{
		if (A[i] != 0)
		{
			long temp = A[i];   // temp = 현재소수
			// 현재 소수의 제곱은이 Max보다 작을 때 기준이지만
			// 곱셈이 long의 범위를 넘어갈 수 있기 때문에 이항정리로 처리
			// N^ k 과 B 값이 아닌 N과 B / N ^ k - 1을 비교하는 형식
			while ((double)A[i] <= (double)Max / (double)temp)
			{
				if ((double)A[i] >= (double)Min / (double)temp)
				{
				count++;
				}
				temp = temp * A[i];  // while문 탈출용?
			}
		}
	}
	cout << count << "\n";
}