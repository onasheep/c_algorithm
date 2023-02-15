// 52. 거짓말쟁이가 되긴 싫어
#include<iostream>
#include<vector>
using namespace std;

static vector<int> parent;
static vector<int> trueP;
static vector<vector<int>> party;
static int result;
void unionfunc(int a, int b);
int find(int a);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, T;  // 사람수, 파티수, 진실을 아는사람 수
	cin >> N >> M >> T;
	trueP.resize(T);

	for (int i = 0; i < T; i++)
	{
		cin >> trueP[i];
	}

	party.resize(M);

	for (int i = 0; i < M; i++)
	{
		int party_size;
		cin >> party_size;

		for (int j = 0; j < party_size; j++)
		{
			int temp;
			cin >> temp;
			party[i].push_back(temp);
		}
	}

	parent.resize(N + 1);
	for (int i = 0; i <= N; i++)
	{
		parent[i] = i;
	}

	// 각 파티에 참여한 사람을 하나로 만드는 유니온 연산
	for (int i = 0; i < M; i++)
	{
		int firstPerson = party[i][0];
		for (int j = 0; j < party[i].size(); j++)
		{
			unionfunc(firstPerson, party[i][j]);
		}
	}

	// 각 파티에서 진실을 아는 사람이 있다면 과장 할수 없음
	for (int i = 0; i < M; i++)
	{
		bool isPossible = true;
		int cur = party[i][0];
		for (int j = 0; j < T; j++)
		{
			if (find(cur) == find(tureP[j]))
			{
				isPossible = false;
				break;
			}
		}
		if (isPossible)
		{
			result++;
		}
	}
	cout << result;
}

void unionfunc(int a, int b)
{
	a = find(a);
	b = find(b);

	if (a != b)
	{
		parent[b] = a;
	}
}

int find(int a)
{
	if (a == parent[a])
	{
		return a;
	}
	else
	{
		return parent[a] = find(parent[a]);
	}
}


