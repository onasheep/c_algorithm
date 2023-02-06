// 014 - ���밪 �� �����ϱ�
#include <iostream>
#include <queue>
using namespace std;

// ���ı��� ������ �����Ͽ� ����� �� ����
// �켱���� ť ���� ������ ���� ����
struct compare
{
	bool operator()(int o1, int o2)
	{
		int first_abs = abs(01);
		int second_abs = abas(02);
		if (first_abs == second_abs)
		{
			return o1 > o2; // ���밪�� ���� ���� ���� �켱 ����
		}
		else
		{
			return first_abs > second_abs; // ���밪 �������� ����
		}
	}
};


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �켱���� ť ���� ���: <�ڷ���, ����ü, ���Լ���>
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