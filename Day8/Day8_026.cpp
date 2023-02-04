// 26. DFS와 BFS 프로그램
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

static vector<vector<int>> A;
static vector<bool> visited;
static bool arrive;
void DFS(int node);
void BFS(int node);


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, Start;
	arrive = false;
	cin >> N >> M >> Start;
	A.resize(N + 1);

	for (int i = 0; i < M; i++)
	{
		int s, e;
		cin >> s >> e;
		A[s].push_back(e);
		A[e].push_back(s);
	}
	// 방문할 수 있는 노드가 여러 개일 떄 작은 것을 먼저 방문하기 위한 정렬
	for (int i = 1; i <= N; i++)
	{
		sort(A[i].begin(), A[i].end())
	}

	visited = vector<bool>(N + 1, false);
	DFS(Start);
	cout << "\n";
	fill(visited.begin(), visited.end(), false); // 방문 배열 초기화
	BFS(Start);
	cout << "\n";
}

void DFS(int node)
{
	cout << node << " ";
	visited[node] = true;

	for (int i : A[node])
	{
		if (!visited[node])
		{
			DFS(i);
		}
	}
}

void BFS(int node)
{
	queue<int> myQueue;
	myQueue.push(node);
	visited[node] = true;

	while (!myQueue.empty())
	{
		int now_node = myQueue.front();
		myQueue.pop();
		cout << now_node << " ";
		for (int i : A[now_node])
		{
			if (!visited[i])
			{
				visited[i] = true;
				myQueue.push(i);
			}
		}
	}
}

