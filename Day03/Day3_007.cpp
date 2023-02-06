#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// N개의 수를 가지는 수의 모임 A에서 , 2개의 수의 합이 M이 되는 경우의 수를 구하시오 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	vector<int> A(N, 0);

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	sort(A.begin(), A.end());

	int count = 0;
	int i = 0;
	int j = N - 1;


	// 투포인터 이동원칙
	while (i < j) // i와 j가 같아지면 while문 종료 
	{
		if (A[i] + A[j] < M) // 합이 M보다 작으면 작은 인덱스++
		{
			i++;
		}
		else if (A[i] + A[j] > M) // 합이 M보다 크면 큰 인덱스--
		{
			j--;
		}
		else // 같다면 카운터를 늘리고 양쪽 인덱스를 변경
		{
			count++;
			i++;
			j--;
		}
	}

	cout << count << "/n";
}