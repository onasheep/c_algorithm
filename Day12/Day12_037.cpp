// 37. 소수 구하기
#include<iostream>
#include<vector>
#include<cmath>	
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, N;
	cin >> M >> N;
	vector<int> A(N + 1);

	for (int i = 2; i < N; i++)
	{
		A[i] = i;
	}
	for (int i = 2; i < sqrt(N); i++) // 제곱근까지만 수행 sqrt()함수는 제곱근 값을 리턴함
	{
		if (A[i] == 0) {
			continue;
		}
		// 초기 j값은 i의 2배수, 가중치도 배수로 늘어남
		for (int j = i + i; j <= N; j = j + i) // 배수 지우기 
		{
			A[j] = 0;
		}
	}
	for (int i = M; i <= N; i++)
	{
		if (A[i] != 0)
		{
			cout << A[i] << "\n";
		}
	}
}