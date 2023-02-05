// 32. 동전 개수의 최솟값 구하기
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;
	vector<int> A(N);

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	
	int count = 0;

	for (int i = N - 1; i >= 0; i--)
	{
		if (A[i] <= K) // 현재 동전이 K보다 작거나 같으면 구성에 추가함
		{
			count += (K / A[i]);  // 몫을 동전갯수로 count에 더해줌
			K = K % A[i];   // 나누고 나눈 나머지로 K값을 업데이트
		}
	}
	cout << count << "\n";
}