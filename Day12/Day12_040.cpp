// 40. 제곱이 아닌 수 찾기
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long Min, Max;
	cin >> Min >> Max;
	// 최댓값과 최솟값의 차이만큼 배열 선언 (사이 값중에서 구하는 것이기 때문)
	vector<bool> Check(Max - Min + 1);

	// 2의 제곱수인 4부터 max보다 작거나 같은 값까지 반복
	for (int i = 2; i * i < Max; i++)
	{
		long pow = i * i;
		long start_index = Min / pow;

		if (Min % pow != 0)
		{
			// 나머지가 있으면 1을 더해주어야 Min보다 큰 제곱수부터 시작됨
			start_index++;
		}
		for (long j = start_index; pow * j <= Max; j++) // 제곱수를 true로 변경
		{
			Check[(int)(j * pow) - Min] = true;
		}
	}
	int count = 0;

	for (int i = 0; i < Max - Min; i++)
	{
		if (!Check[i]) // 제곱이 아닌 수를 찾기때문에 제곱수가 false일 경우 count 증가
		{
			count++;
		}
	}
	cout << count << "\n";
}
