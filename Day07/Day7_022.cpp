// 022. �� �����ϱ� 3
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int count[10001] = { 0 };
	int number = 0;

	for (int i = 1; i <= N; i++)
	{
		cin >> number;
		count[number]++;
	}
	/// <summary>
	/// 10000 ������ �ڿ����̹Ƿ� �ش� ũ�⸸ŭ�� �迭�� �����.
	/// �Է� ���� number�� �ش��ϴ� �迭 �ε��� ���� ������ ��
	/// 0���� 10000������ index�� for������ ���������� ���鼭
	/// 0�� �ƴ� ��� ������� ����ϸ� ���ĵ� ����� ��µȴ�.
	/// </summary>
	/// <returns></returns>
	for (int i = 0; i < 10000; i++)
	{
		if (count[i] != 0)
		{
			// �ش� count �迭�� ����ŭ index�� �ݺ��Ͽ� ���
			for (int j = 0; j < count[i]; j++)
			{
				cout << i << "\n";
			}
		}
	}
}