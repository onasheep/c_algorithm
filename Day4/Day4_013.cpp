// 013 - 카드게임
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> myQueue;
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		myQueue.push(i);
	}
	// 큐에 남은 마지막 원소가 1개일때까지 1) pop() 2) push() -> pop()을 반복한다
	while (myQueue.size() > 1)
	{
		myQueue.pop();
		myQueue.push(myQueue.front());
		myQueue.pop();
	}
	cout << myQueue.front();
}