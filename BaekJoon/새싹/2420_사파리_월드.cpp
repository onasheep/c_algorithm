#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n, m;
    long long res;

    cin >> n >> m;
    res = n - m;

    cout << abs(res);
    return 0;
}