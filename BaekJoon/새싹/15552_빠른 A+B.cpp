# 15552 빠른 A + B

```cpp
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int a, b;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        cout << a + b << "\n";
    }

    return 0;

}
```

-- -

문제는 바로 풀었는데 칸 나누기를 깜빡해서 틀렸음