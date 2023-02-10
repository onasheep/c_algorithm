// 49. 물의 양 구하기
#include<iostream>
#include<queue>
using namespace std;

void BFS();
// 6가지 이동 케이스를 표현하기 위한 배열
static int Sender[] = { 0, 0, 1, 1, 2, 2 };  // 0 A 1 B 2 C
static int Receiver[] = { 1, 2, 0, 2, 0, 1 }; // 0 A 1 B 2 C
// A B의 용량만 있으면 C의 용량이 고정되므로 2개로만 체크 가능 
static bool visited[201][201];
staic bool answer[201];
static int now[3]; // 현재 물의 양을 저장하는 배열

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
		int C = now[2] - A - B;  // C는 전체 물의 양에서 A와 B를 뺸 것
		// A -> B, A-> C, B -> A, B -> C, C -> A, C -> B 6개의 케이스로 이동

		for (int k = 0; k < 6; k++)
		{
			int next[] = { A,  B, C };
			next[Receiver[k]] += next[Sender[k]];
			next[Sender[k]] = 0;

			// 대상 물통의 욜량보다 물이 많아 넘칠 때
			if (next[Receiver[k]] > now[Receiver[k]])
			{
				// 초과하는 만큼 다시 이전 물통에 넣음
				next[Sender[k]] = next[Receiver[k]] - now[Receiver[k]];
				// 대상 물통은 최대로 채움
				next[Receiver[k]] = now[Receiver[k]];
			}
			// A와 B의 물의 양을 통하여 방문 배열 체크
			if (!visited[next[0][next[1]])
			{
				visited[next[0][next[1]] = true;
				queue.push(make_pair(next[0], next[1]));
				//A의 물의 양이 0 일 때 C의 물의 용량을 정답 변수에 저장
				if (next[0] == 0)
				{
					answer[next[2]] = true;
				}
			}
		}
	}
}