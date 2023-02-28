#include<iostream>
using namespace std;

int main()
{
    int yunnyun;
    int res;
    cin >> yunnyun;

    if ((yunnyun % 4) == 0 && (yunnyun % 100) != 0)
    {
        res = 1;
    }
    else if (yunnyun % 400 == 0)
    {
        res = 1;
    }
    else
    {
        res = 0;
    }

    cout << res;

    return 0;
}