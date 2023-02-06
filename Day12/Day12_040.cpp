// 40. ������ �ƴ� �� ã��
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long Min, Max;
	cin >> Min >> Max;
	// �ִ񰪰� �ּڰ��� ���̸�ŭ �迭 ���� (���� ���߿��� ���ϴ� ���̱� ����)
	vector<bool> Check(Max - Min + 1);

	// 2�� �������� 4���� max���� �۰ų� ���� ������ �ݺ�
	for (int i = 2; i * i < Max; i++)
	{
		long pow = i * i;
		long start_index = Min / pow;

		if (Min % pow != 0)
		{
			// �������� ������ 1�� �����־�� Min���� ū ���������� ���۵�
			start_index++;
		}
		for (long j = start_index; pow * j <= Max; j++) // �������� true�� ����
		{
			Check[(int)(j * pow) - Min] = true;
		}
	}
	int count = 0;

	for (int i = 0; i < Max - Min; i++)
	{
		if (!Check[i]) // ������ �ƴ� ���� ã�⶧���� �������� false�� ��� count ����
		{
			count++;
		}
	}
	cout << count << "\n";
}
