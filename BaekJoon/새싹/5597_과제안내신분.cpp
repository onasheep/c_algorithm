#include<iostream>
using namespace std;

int main()
{
    int arr[31] = { 0 };
    int index;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 1; i <= 28; i++)
    {
        cin >> index;
        arr[index] = 1;
    }
    for (int i = 1; i <= 30; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << "\n";
        }
    }
    return 0;
}