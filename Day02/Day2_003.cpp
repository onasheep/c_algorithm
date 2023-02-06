#include <iostream>
using namespace std;

/*
�� N���� �־����� ��, i��° ������ j��° ������ ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�: 1���� �� ���� ���� N�� ���� ���� M , 2��° �ٿ��� N���� ��.
���: �� M���� �ٿ� �Է����� �־��� i��° ������ j��° ������ ���� ����Ѵ�.
*/
int main()
{
    ios::sync_with_stdio(false);
    // C++ iostream�� ����ȭ ��Ȱ��ȭ(���� ���� �������� �ӵ��ø�)
    cin.tie(NULL);
    cout.tie(NULL);
    // cin, cout�� �ϳ��� ���� �ִµ� �� �۾����� ���۸� ���ڵ����� ����ش�.
    // �� �۾��� �����ϱ� ������ �ӵ��� �� ��������.

    int suNo, quizNo;
    cin >> suNo >> quizNo;

    int S[100001] = {};

    for (int i = 1; i <= suNo; i++)
    {
        int temp;
        cin >> temp;
        S[i] = S[i - 1] + temp;
    }

    for (int i = 0; i < quizNo; i++)
    {
        int start, end;
        cin >> start >> end;
        cout << S[end] - S[start - 1] << "/n";
    }
}