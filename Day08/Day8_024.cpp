// 24. 신기한 소수
#include<iostream>
using namespace std;

void DFS(int number, int jarisu);
bool isPrime(int num);
static int N;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	DFS(2, 1);
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);
	
	
}

void DFS(int number, int jarisu)
{
	if (jarisu == N)
	{
		if (isPrime(number))
		{
			cout << number << "\n";
		}
		return;
	}

	for (int i = 1; i < 10; i++)
	{
		if (i % 2 == 0)  // 2로 나눠지면 소수가 아니므로 넘어감
		{
			continue;
		}
		if (isPrime(nuber * 10 + i)) // 소수일 경우 해당값을 받고 자릿수를 올리며 재귀함
		{
			DFS(number * 10 + i, jarisu + 1);
		}
	}
}

bool isPrime(int num)  // 소수를 찾아내는 함수
{
	for (int i = 2; i < num / 2; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return;
}