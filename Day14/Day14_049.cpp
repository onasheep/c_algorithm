// 49. ���� �� ���ϱ�
#include<iostream>
#include<queue>
using namespace std;

void BFS();
// 6���� �̵� ���̽��� ǥ���ϱ� ���� �迭
static int Sender[] = { 0, 0, 1, 1, 2, 2 };  // 0 A 1 B 2 C
static int Receiver[] = { 1, 2, 0, 2, 0, 1 }; // 0 A 1 B 2 C
// A B�� �뷮�� ������ C�� �뷮�� �����ǹǷ� 2���θ� üũ ���� 
static bool visited[201][201];
staic bool answer[201];
static int now[3]; // ���� ���� ���� �����ϴ� �迭

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> now[0] >> now[1] >> now[2];
	BFS();

	for (int i = 0; i < 201; i++)
	{
		if (answer[i])
		{
			cout << i << " ";
		}
	}
}
void BFS()
{
	queue<pair<int, int>> queue;
	queue.push(make_pair(0, 0));
	visited[0][0] = true;
	answer[now[2]] = true;

	while (!queue.empty())
	{
		pair<int, int> p = queue.front();
		queue.pop();
		int A = p.first;
		int B = p.second;
		int C = now[2] - A - B;  // C�� ��ü ���� �翡�� A�� B�� �A ��
		// A -> B, A-> C, B -> A, B -> C, C -> A, C -> B 6���� ���̽��� �̵�

		for (int k = 0; k < 6; k++)
		{
			int next[] = { A,  B, C };
			next[Receiver[k]] += next[Sender[k]];
			next[Sender[k]] = 0;

			// ��� ������ �緮���� ���� ���� ��ĥ ��
			if (next[Receiver[k]] > now[Receiver[k]])
			{
				// �ʰ��ϴ� ��ŭ �ٽ� ���� ���뿡 ����
				next[Sender[k]] = next[Receiver[k]] - now[Receiver[k]];
				// ��� ������ �ִ�� ä��
				next[Receiver[k]] = now[Receiver[k]];
			}
			// A�� B�� ���� ���� ���Ͽ� �湮 �迭 üũ
			if (!visited[next[0][next[1]])
			{
				visited[next[0][next[1]] = true;
				queue.push(make_pair(next[0], next[1]));
				//A�� ���� ���� 0 �� �� C�� ���� �뷮�� ���� ������ ����
				if (next[0] == 0)
				{
					answer[next[2]] = true;
				}
			}
		}
	}
}