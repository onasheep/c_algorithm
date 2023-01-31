// 022. 수 정렬하기 3
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
	int count[10001] = { 0 };
	int number = 0;

	for (int i = 1; i <= N; i++)
	{
		cin >> number;
		count[number]++;
	}
	/// <summary>
	/// 10000 까지의 자연수이므로 해당 크기만큼의 배열을 만든다.
	/// 입력 받은 number에 해당하는 배열 인덱스 값을 더해준 뒤
	/// 0부터 10000까지의 index를 for문으로 순차적으로 돌면서
	/// 0이 아닌 경우 순서대로 출력하면 정렬된 결과가 출력된다.
	/// </summary>
	/// <returns></returns>
	for (int i = 0; i < 10000; i++)
	{
		if (count[i] != 0)
		{
			// 해당 count 배열의 값만큼 index를 반복하여 출력
			for (int j = 0; j < count[i]; j++)
			{
				cout << i << "\n";
			}
		}
	}
}