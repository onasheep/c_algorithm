#include <iostream>

using namespace std;


/*������ ���� ���ϱ�.
	n���� ���ڰ� ���� ���� ���� �ִ�. �� ���ڸ� ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
  �Է� : 1��° �ٿ� n���� ������ ����, 2���� �ٿ� ���� n���� ������� �־���
	��� : �Է����� �־��� ������ N���� ���� ���
*/
int main1()
{
	int n = 0;
	string numbers;
	cin >> n;
	cin >> numbers;

	int sum = 0;
	for (int i = 0; i < numbers.length(); i++)
	{
		// numbers[i]�� ������ ����Ͽ� sum �� �����ϱ�
		sum += numbers[i] - '0';
	}

	cout << sum << '\n';
}