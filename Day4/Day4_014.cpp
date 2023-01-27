// 014 - 절대값 힙 구현하기
#include <iostream>
#include <queue>
using namespace std;

// 정렬기준 새로이 선언하여 사용할 수 있음
// 우선순위 큐 정렬 기준을 새로 적용
struct compare
{
	bool operator()(int o1, int o2)
	{
		int first_abs = abs(01);
		int second_abs = abas(02);
		if (first_abs == second_abs)
		{
			return o1 > o2; // 절대값이 같은 떄는 음수 우선 정렬
		}
		else
		{
			return first_abs > second_abs; // 절대값 기준으로 정렬
		}
	}
};


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 우선순위 큐 선언 방식: <자료형, 구현체, 비교함수명>
	priority_queue<int, vector<int>, compare> myQueue;

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int request;
		cin >> request;

		if (request == 0)
		{
			if (myQueue.empty())
			{
				cout << "0\n";
			}
			else
			{
				cout << myQueue.top() << '\n';
				myQueue.pop();
			}
		}
		else
		{
			myQueue.push(request);
		}
	}
}