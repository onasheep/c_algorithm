// 41. ���Ϸ� �� �Լ� �����ϱ�
#include<iostream>
#include<cmath>
using namespace std;

// �ڿ��� n�� �־������� GCD(n,k) = 1(1<= k <= n)�� �����ϴ� �ڿ����� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// ���⼭ GCD(n,k) = 1 �� �����ϴ� �ڿ����� ������ ���Ϸ� �� �Լ��� ������.

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n;
	cin >> n;
	long result = n;

	for (long p = 2; p <= sqrt(n); p++) // �����ٱ����� ����
	{
		if (n % p == 0) // p�� ���μ����� Ȯ��
		{
			result = result - result / p;
			// �ش� ���μ� �����( 2^7 * 11 �̶�� 2^7�� ����� 11�� �����. )
			while (n % p == 0)
			{
				n /= p;
			}
		}

	}
	if (n > 1) // ���� ���μ� ������ �����ִ� ���
	{
		//�ݺ������� �����ٱ����� Ž���߱� ������ 1���� ���μ��� �����Ǵ� ���̽�
		result = result - result / n;
	}
	cout << result << "\n";
}