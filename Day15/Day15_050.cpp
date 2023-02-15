// 50. 집합 표현하기
#include<iostream>
#include<vector>
using namespace std;

static vector<int> parent;
void unionfunc(int a, int b);
int find(int a);
bool checkSame(int a, int b);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	parent.resize(N + 1);

	for (int i = 0; i <= N; i++)
	{
		parent[i] = i;
	}
	for (int i = 0; i < M; i++)
	{
		int question, a, b;
		cin >> question >> a >> b;

		if (question == 0) // 0이 라면 집합 합치기 수행 
		{
			unionfunc(a, b);
		}
		else // 같은 집합의 원소인지 확인 
		{
			if (checkSame(a, b))
			{
				cout << "YES" << "\n";
			}
			else
			{
				cout << "NO" << "\n";
			}
		}
	}
	
}

void unionfunc(int a, int b) // union 연산 : 바로 연결이 아닌 대표 노드끼리 연결함
{
	a = find(a);
	b = find(b);

	if (a != b)
	{
		parent[b] = a;
	}
}

int find(int a) // find 연산 : 대표 노드를 찾아서 반환함
{
	if (a == parent[a])
	{
		return a;
	}
	else
	{
		return parent[a] = find(parent[a]); // 재귀 함수 형태로 구현 (대표 노드를 찾을 때 까지)
	}
}

bool checkSame(int a, int b) // 두 원소가 같은 집합인지 확인
{
	a = find(a);
	b = find(b);

	if (a == b)
	{
		return true;
	}
	return false;
}