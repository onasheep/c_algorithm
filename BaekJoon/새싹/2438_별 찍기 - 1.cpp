#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        str += "*";
        cout << str << "\n";
    }
    return 0;

}