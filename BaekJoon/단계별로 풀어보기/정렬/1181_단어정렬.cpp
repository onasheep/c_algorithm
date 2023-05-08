#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareWith(string a, string b) {
    if (a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main() {
    int n;
    vector<string> vec;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (find(vec.begin(), vec.end(), str) == vec.end())
            vec.push_back(str);
    }
    sort(vec.begin(), vec.end(), compareWith);

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << '\n';
    }
}