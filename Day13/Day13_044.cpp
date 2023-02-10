// 44.Ĭ���� �����
#include<iostream>
#include<vector>
#include<tuple>
using namespace std;

vector<tuple<int, int, int>> A[10]; // Ʃ���� ���� ���
long lcm;  // �ּ� ����� 
bool visited[10];
long D[10];  // ��� �� ���� �迭
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
		// �� ���� �ִ� ������� �� ���� ���� �ִ� ������� ������
		lcm = (p * q / gcd(p, q));
	}
	// 0�� ��忡 �ּ� ����� ���� �� DFS Ž�� ����
	D[0] = lcm;
	DFS(0);
	// DFS�� ���Ͽ� ������Ʈ �� �迭 D ���� �ִ� ����� ���
	long mgcd = D[0];
	for (size_t i = 0; i < N; i++)
	{
		mgcd = gcd(mgcd, D[i]);
	}// �迭 D�� �� ���� �ִ� ������� ������ ���� ���
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
			// �־��� ������ ���� ��尪 ������Ʈ
			D[next] = D[node] * get<2>(i) / get<1>(i);
			DFS(next);
		}
	}
}