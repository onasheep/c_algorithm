#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string, double> grades = { {"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0},
                                  {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0},
                                  {"F", 0.0} };

    int n = 20;
    double total_credits = 0.0, total_score = 0.0;

    while (n--) {
        string course;
        double credits;
        string grade;
        cin >> course >> credits >> grade;

        if (grade != "P")
        {
            total_credits += credits;
            total_score += credits * grades[grade];
        }
        else
        {
            continue;
        }
    }


    cout.precision(4);
    cout << fixed;
    cout << (total_score / total_credits);

    return 0;
}
