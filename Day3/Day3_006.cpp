#include <iostream>
using namespace std;

// �־��� N���� ���ӵ� �ڿ����� ������ ��Ÿ���� �������� ����Ѵ�. 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int count = 1; // (N�� + 0) �� �����Ͽ� 0�� �ƴ� 1�� �ʱ�ȭ 
    int start_index = 1;
    int end_index = 1;
    int sum = 1;

    // �������� �̵� ��Ģ
    while (end_index != N) {
        if (sum == N) { // ���� ã���� ��
            count++;
            end_index++;
            sum = sum + end_index;
        }
        else if (sum > N) // ���� ���� �亸�� Ŭ ��
        {
            sum = sum - start_index;
            start_index++;
        }
        else { // ���� ���� �亸�� ���� �� 
            end_index++;
            sum = sum + end_index;
        }
    }

    cout << count << "/n";


}