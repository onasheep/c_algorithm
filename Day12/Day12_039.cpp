// 39. �Ҽ� & �Ӹ���� �� �߿��� �ּڰ� ã��
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

bool isPalindrome(int integer);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long N;
	cin >> N;
	long A[10000001];

	for (int i = 2; i < 10000001; i++)
	{
		A[i] = i;
	}
	for (int i = 2; i < sqrt(10000001); i++)  // �����ٱ��� ���� 
	{
		if (A[i] == 0)
		{
			continue;
		}
		for (int j = i + i; j < 10000001; j = j + i) // ��� �����
		{
			A[j] = 0;
		}
	}

	int i = N;

	while (true)
	{
		if (A[i] != 0) 
		{
			int result = A[i];
			if (isPalindrome(result))
			{
				cout << result << "\n";
				break;
			}
		}
		i++;
	}
}

bool isPalindrome(int target)  // �Ӹ���� �Ǻ� �Լ�
{
	string temp_str = to_string(target); // ���ڸ� ���ڿ��� ��ȯ
	char const* temp = temp_str.c_str();  // ���ڿ��� �迭�� ��ȯ
	int s = 0;
	int e = temp.size() - 1;
	
	while (s < e) // �������ͷ� �յڰ� ������ �Ǻ�
	{
		if (temp[s] != temp[e])
		{
			return false;
		}
		s++;
		e--;
	}
	return true;
}