#include <iostream>

using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int res = 0;

	cin >> n;

	for (int i = 1; i * i <= n; i++)
	{
		res++;
	}

	cout << res;
	return 0;
}
