#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int res = 1;
    cin >> n;


    for (int i = n; i > 0; i--)
    {
        res *= i;
    }

    cout << res;



    return 0;
}