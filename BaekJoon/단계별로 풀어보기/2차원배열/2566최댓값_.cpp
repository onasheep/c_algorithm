#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[9][9];
    int max = 0;
    int row = 0, column = 0;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
            if (max < arr[i][j])
            {
                max = arr[i][j];
                row = i;
                column = j;
            }
        }
    }

    cout << max << "\n";
    cout << row + 1 << " " << column + 1;


}