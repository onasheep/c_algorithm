// 48. �̺� �׷��� �Ǻ��ϱ�
#include<iostream>
#include<vector>
using namespace std;

void DFS(int node);
static vector<vector<int>> A;
static vector<int> check;
static vector<bool> visited;
static bool isEven;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N; // �׽�Ʈ ���̽�
	cin >> N;
	for (int t = 0; t < N; t++)
	{
		int V, E; // ��� ��, ���� ��
		cin >> V >> E;
		A.resize(V + 1);
		visited.resize(V + 1);
		check.resize(V + 1);
		isEven = true;;

		for (int i = 0; i < E; i++)
		{
			int S, E;
			cin >> S >> E;
			A[S].push_back(E);
			A[E].push_back(S);
		}
		// �־��� �׷����� �ϳ��� ����ȴٴ� ������ �����Ƿ� ��� ��忡�� ����
		for (int i = 0; i <= V; i++)
		{
			if (isEven)
			{
				DFS(i);
			}
			else
			{
				break;
			}
		}
		if (isEven)
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO" << "\n";
		}
		for (int i = 0; i < V; i++) // ���� �׽�Ʈ ���̽��� ���� �ʱ�ȭ
		{
			A[i].clear();
			visited[i] = false;
			check[i] = 0;
		}
	}

}

void DFS(int node) //DFS ����
{
	visited[node] = true;

	for (int i : A[node])
	{
		if (!visited[i])
		{
			//������ ���� ���� ������ �ƴϹǷ� ���� ���� �ٸ� �������� ó��
			check[i] = (check[node] + 1) % 2;
			DFS(i);
		}
		else if (check[node] == check[i])
		{
			// �̹� �湮�� ��尡 ���� ���� ���� �����̸� �̺� �׷����� �ƴ�
			isEven = false;
		}
	}
}