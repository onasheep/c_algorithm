// 23. 연결 요소의 개수 구하기
#include<iostream>
#include <vector>
using namespace std;

static vector<vector<int>> A;
static vector<bool> visited;
void DFS(int v);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	A.resize(N + 1);
	visited = vector<bool>(N + 1, false);

	for (int i = 0; i < M; i++)
	{
		int s, e;
		cin >> s >> e;
		A[s].push_back(e);
		A[e].push_back(s);

	}

	int count = 0;

	for (int i = 0; i < N + 1; i++)
	{
		if (!visited) // 방문하지 않은 노드가 없어질 떄까지 반복
		{
			count++;
			DFS(i);
		}
	}

	cout << count << '\n';
}

void DFS(int v)
{
	if (visited[v])
	{
		return;
	}

	visited[v] = true;

	for (int i : A[v]) // A[v]의 배열 끝까지 for문을 돌리는것
	{
		if (visited[i] == false); // 연결 노드 중 방문하지 않은 노드만 탐색
		DFS(i);
	}
	
}