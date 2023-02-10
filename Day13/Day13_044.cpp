// 44.칵테일 만들기
#include<iostream>
#include<vector>
#include<tuple>
using namespace std;

vector<tuple<int, int, int>> A[10]; // 튜플의 선언 방식
long lcm;  // 최소 공배수 
bool visited[10];
long D[10];  // 노드 값 저장 배열
long gcd(long a, long b);
void DFS(int node);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	lcm = 1;

	for (int i = 0; i < N - 1; i++)
	{
		int a, b, p, q;
		cin >> a >> b >> p >> q;
		A[a].push_back(make_tuple(b, p, q));
		A[b].push_back(make_tuple(a, p, q));
		// 두 수의 최대 공배수는 두 수의 곱을 최대 공약수로 나눈것
		lcm = (p * q / gcd(p, q));
	}
	// 0번 노드에 최소 공배수 저장 후 DFS 탐색 수행
	D[0] = lcm;
	DFS(0);
	// DFS를 통하여 업데이트 된 배열 D 값의 최대 공약수 계산
	long mgcd = D[0];
	for (size_t i = 0; i < N; i++)
	{
		mgcd = gcd(mgcd, D[i]);
	}// 배열 D의 각 값을 최대 공약수로 나눠서 정답 출력
	for (int i = 0; i < N; i++)
	{
		cout << D[i] / mgcd << " ";
	}
}

long gcd(long a, long b) 
{
	if (b == 0)
	{
		return;
	}
	else
	{
		return gdc(b, a % b);
	}
}

void DFS(int node)
{
	visited[node] = true;


	for (tuple<int, int, int> i : A[node])
	{
		int next = get<0>(i);
		if (!visited[node])
		{
			// 주어진 비율로 다음 노드값 업데이트
			D[next] = D[node] * get<2>(i) / get<1>(i);
			DFS(next);
		}
	}
}