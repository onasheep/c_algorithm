// 31. �迭���� k��° �� ã��
#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long N, k;
	cin >> N >> K;
	long start = 1, end = k;
	long ans = 0;


	// ���� Ž�� ����
	while (start <= end)
	{
		long middle = (start + end) / 2;
		long cnt;

		// �߾Ӱ����� ���� �� ���� ���
		for (int i = 1; i <= N; i++)
		{
			cnt += min(middle / i, N); // ���� ���� ī��Ʈ �ϴ� �ٽ� ����
		}
		if (cnt < k)
		{
			start = middle + 1;
		}
		else
		{
			ans = middle; // ���� �߾Ӱ��� ������ ����
			end = middle - 1;
		}
	}
	cout << ans << "\n";
}