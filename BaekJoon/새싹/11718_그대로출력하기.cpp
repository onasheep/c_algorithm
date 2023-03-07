#include<iostream>
#include<string>
using namespaces std;


string str 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	getline(cin, str);
	
	while (true)
	{
		if (str == "")
		{
			break;
		}
		cout << str << "\n";
		getline(cin, str);
	}

	return 0;
}