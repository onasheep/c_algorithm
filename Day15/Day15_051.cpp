// 51. 여행 계획 짜기
#include<iostream>
#include<vector>
using namespace std;

static vector<int> parent;
void unionfunc(int a, int b);
int find(int a);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	int dosi[201][201];

	for (int i = 1; i <= N; i++) // 도시 연결데이터 저장
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> dosi[i][j];
		}
	}
	int route[1001];

	for (int i = 1; i <= M; i++) // 여행 도시 정보 저장
	{
		cin >> route[i];
	}
	
	parent.resize(N + 1);

	for (int i = 1; i <= N; i++) // 대표 노드 자기 자신으로 초기화
	{
		parent[i] = i;
	}
	// 인접 행렬 탐색에서 도시가 연결되면 유니온 실행
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (dosi[i][j] == 1)
			{
				unionfunc(i, j);
			}
		}
	}
	// 여행 계획 도시가 하나의 대표 도시로 연결되는지 확인
	int index = find(route[1]);
	bool connect = true;

	for (int i = 2; i <= M; i++)
	{
		if (index != find(route[i]))
		{
			cout << "NO" << "\n";
			connect = false;
			break;
		}
	}
	if (connect)
	{
		cout << "YES" << "\n";
	}
}

void unionfunc(int a, int b) // 유니온 연산 : 대표 노드끼리 연결
{
	a = find(a);
	b = find(b);

	if (a != b)
	{
		parent[b] = a;
	}
}

int find(int a) // 파인드 연산 : 대표 노드 반환
{
	if (a == parent[a])
	{
		return a;
	}
	else
	{
		return parent[a] = find(parent[a]); // 대표 노드를 찾을 때 까지 재귀
	}
}