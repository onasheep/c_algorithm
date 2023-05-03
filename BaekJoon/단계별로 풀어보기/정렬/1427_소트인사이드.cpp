#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n;
	int length = 0;
	vector<int> arr;
	cin >> n;

	while (n > 0)
	{
		int num = n % 10;
		arr.push_back(num);
		n /= 10;
		length++;

	}

	sort(arr.begin(), arr.end(), std::greater<int>());

	for (int i = 0; i < length; i++)
	{
		cout << arr[i];
	}

	return 0;
}
