#include <iostream>

using namespace std;


/*숫자의 합을 구하기.
	n개의 숫자가 공백 없이 쓰여 있다. 이 숫자를 모두 합해 출력하는 프로그램을 작성하시오
  입력 : 1번째 줄에 n개의 숫자의 개수, 2번쨰 줄에 숫자 n개가 공백없이 주어짐
	출력 : 입력으로 주어진 숫자의 N개의 합을 출력
*/
int main1()
{
	int n = 0;
	string numbers;
	cin >> n;
	cin >> numbers;

	int sum = 0;
	for (int i = 0; i < numbers.length(); i++)
	{
		// numbers[i]를 정수로 계산하여 sum 에 누적하기
		sum += numbers[i] - '0';
	}

	cout << sum << '\n';
}