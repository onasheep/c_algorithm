// 047. ȿ�������� ��ŷ�ϱ�
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void BFS(int node);
static vector<vector<int>> A;
static vector<int> answer;
static vector<bool> visited;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long N, M;
	cin >> N >> M;
	A.resize(N + 1);
	answer.resize(N + 1);

	for (int i = 0; i < M; i++)
	{
		int S, E;
		cin >> S >> E;
		A[S].push_back(E);
	}

	visited.reserve(N + 1);

	for (int i = 0; i <= N; i++)
	{
		fill(visited.begin(), visited.end(), false);
		BFS(i); // ��� ��忡�� BFS ����
	}

	int maxVal = 0;
	for (int i = 0; i <= N; i++)
	{
		maxVal = max(maxVal, answer[i]);
	}
	for (int i = 1; i <= N; i++)
	{
		//answer �迭���� maxVal ���� ���� index�� �������� ���
		if (answer[i] == maxVal)
		{
			cout << i << " ";
		}
	}
}
void BFS(int index)
{
	queue<int> queue;
	queue.push(index);
	visited[index] = true;
	while (!queue.empty())
	{
		int now_node = queue.front();
		queue.pop();
		for (int i : A[now_node])
		{
			if (visited[i] == false)
			{
				visited[i] = true;
				answer[i]++; // �ű� ��� �ε��� ���� �迭�� ����
				queue.push(i);
			}
		}
	}
}