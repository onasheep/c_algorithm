#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int n, sum = 0;
	cin >> str >> n;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{		// 수가 문자가 아닌 경우
			sum = sum * n + (str[i] - 48);
		}
		else
		{
			sum = sum * n + (str[i] - 65 + 10);
		}
	}
	cout << sum;
	return 0;
}
