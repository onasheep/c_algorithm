#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareWith(string a, string b) {
    if (a.length() == b.length())
    {
        return a < b;
    }
    return a.length() < b.length();
}

int main() {
    int n;
    vector<string> words;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (find(words.begin(), words.end(), str) == words.end())
            words.push_back(str);
    }
    sort(words.begin(), words.end(), compareWith);

    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << '\n';
    }
}