// 047. 효율적으로 해킹하기
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
		BFS(i); // 모든 노드에서 BFS 실행
	}

	int maxVal = 0;
	for (int i = 0; i <= N; i++)
	{
		maxVal = max(maxVal, answer[i]);
	}
	for (int i = 1; i <= N; i++)
	{
		//answer 배열에서 maxVal 값을 가진 index를 정답으로 출력
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
				answer[i]++; // 신규 노드 인덱스 정답 배열값 증가
				queue.push(i);
			}
		}
	}
}
