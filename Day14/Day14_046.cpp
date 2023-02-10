// 46. 특정 거리의 도시 찾기
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

void BFS(int node);
static vector<vector<int>> A;
static vector<int> answer;
static vector<int> visited;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long N, M, K, X;
	cin >> N >> M >> K >> X;
	A.resize(N + 1);

	for (int i = 0; i < M; i++)
	{
		int S, E;
		cin >> S >> E;
		A[S].push_back(E);
	}
	visited.resize(N + 1);

	for (int i = 0; i <= N; i++)
	{
		visited[i] = -1;
	}
	BFS(X);

	for (int i = 0; i <= N; i++)
	{
		if (visited[i] == K) // 방문 거리가 K인 노드의 숫자를 정답 배열에 더하기
		{
			answer.push_back(i);
		}
	}
	if (answer.empty())
	{
		couut << -1 << "\n";
	}
	else
	{
		sort(answer.begin(), answer.end()); // 정답 배열 오름차순 후 출력
		for (int temp : answer)
		{
			cout << temp << "\n";
		}
	}
}

void BFS(int node) // BFS 구현
{
	queue<int> queue;
	queue.push(node);
	visited[node]++;

	while (!queue.empty())
	{
		int now_node = queue.front();
		queue.pop();
		for (int i : A[now_node])
		{
			if (visited[i] == -1)
			{
				visited[i] == visited[now_node] + 1;
				queue.push(i);
			}
		}
	}
}