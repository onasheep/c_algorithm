#include<iostream>
#include<vector>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x;
    int count = 0;
    cin >> n;
    vector<int> arr(n, 0);


    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];

    }

    cin >> x;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}