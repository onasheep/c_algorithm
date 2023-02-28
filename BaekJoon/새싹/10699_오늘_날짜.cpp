#include<iostream>
#include<ctime>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    time_t t = time(nullptr);
    tm* now = localtime(&t);
    cout << (now->tm_year + 1900) << "-";

    cout.width(2);
    cout.fill('0');
    cout << (now->tm_mon + 1) << "-";

    cout.width(2);
    cout.fill('0');
    cout << (now->tm_mday);

    return 0;
}