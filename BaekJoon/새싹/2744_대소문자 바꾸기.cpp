#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else if ('a' <= str[i] && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    cout << str;
}