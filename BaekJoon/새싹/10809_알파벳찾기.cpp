#include<iostream>
#include<string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < alphabet.length(); i++)
	{
		cout << (int)s.find(alphabet[i]) << " ";
	}

	return 0;


}