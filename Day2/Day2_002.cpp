#include <iostream>
using namespace std;

/*  ��� ���ϱ�
        �����̴� �⸻���縦 ���ƴ�. �����̴� ������ �����ؼ� ���� ��������� �ߴ�.
      �ϴ� �����̴� �ڱ� ���� �߿� �ִ��� �����. �� ���� M�̶�� �Ѵ�.
      �׸��� ���� ��� ������ ����/M*100���� ���ƴ�.
    ���� ���, �������� �ְ����� 70�̰�, ���������� 50�̾�����
      ���������� 50/70*100�� �Ǿ� 71.43���� �ȴ�.
    �������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

        �Է�: 1���� �ٿ� ���� ���� ���� n, 2��° �ٿ��� ���� ������ �־���.
        ���: 1��° �ٿ� ���ο� ����� ���.
*/
int main()
{
    int n = 0;
    int A[1000];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    long sum = 0;
    long max = 0;

    for (int i = 0; i < n; i++)
    {
        if (A[i] > max) {
            max = A[i];
        }
        sum = sum + A[i];
    }
    // �� ����� ���õ� ������ ��� ���� �� ���õ� �������� ��ȯ�� ������ ��������
// ���� * 100 / �ְ� ���� / ������ ��
    double result = sum * 100.0 / max / n;
    cout << result << "\n";
}