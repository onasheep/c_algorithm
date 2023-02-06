// 41. 오일러 피 함수 구현하기
#include<iostream>
#include<cmath>
using namespace std;

// 자연수 n이 주어졌을떄 GCD(n,k) = 1(1<= k <= n)을 만족하는 자연수의 개수를 구하는 프로그램을 작성하시오.
// 여기서 GCD(n,k) = 1 을 만족하는 자연수의 개수가 오일러 피 함수의 정의임.

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n;
	cin >> n;
	long result = n;

	for (long p = 2; p <= sqrt(n); p++) // 제곱근까지만 진행
	{
		if (n % p == 0) // p가 소인수인지 확인
		{
			result = result - result / p;
			// 해당 소인수 지우기( 2^7 * 11 이라면 2^7을 지우고 11만 남긴다. )
			while (n % p == 0)
			{
				n /= p;
			}
		}

	}
	if (n > 1) // 아직 소인수 구성이 남아있는 경우
	{
		//반복문에서 제곱근까지만 탐색했기 때문에 1개의 소인수가 누락되는 케이스
		result = result - result / n;
	}
	cout << result << "\n";
}