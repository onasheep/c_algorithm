// 48. 이분 그래프 판별하기
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

	int N; // 테스트 케이스
	cin >> N;
	for (int t = 0; t < N; t++)
	{
		int V, E; // 노드 수, 에지 수
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
		// 주어진 그래프가 하나로 연결된다는 보장이 없으므로 모든 노드에서 수행
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
		for (int i = 0; i < V; i++) // 다음 테스트 케이스를 위한 초기화
		{
			A[i].clear();
			visited[i] = false;
			check[i] = 0;
		}
	}

}

void DFS(int node) //DFS 구현
{
	visited[node] = true;

	for (int i : A[node])
	{
		if (!visited[i])
		{
			//인접한 노드는 같은 집합이 아니므로 이전 노드와 다른 집합으로 처리
			check[i] = (check[node] + 1) % 2;
			DFS(i);
		}
		else if (check[node] == check[i])
		{
			// 이미 방문한 노드가 현재 노드와 같은 집합이면 이분 그래프가 아님
			isEven = false;
		}
	}
}