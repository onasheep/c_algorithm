#include<iostream>
#include<vector>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> arr(n, 0);


    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];

    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < x)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}