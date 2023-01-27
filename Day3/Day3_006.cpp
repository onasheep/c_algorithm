#include <iostream>
using namespace std;

// 주어진 N값을 연속된 자연수의 합으로 나타내는 가짓수를 출력한다. 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int count = 1; // (N값 + 0) 을 포함하여 0이 아닌 1로 초기화 
    int start_index = 1;
    int end_index = 1;
    int sum = 1;

    // 투포인터 이동 원칙
    while (end_index != N) {
        if (sum == N) { // 답을 찾았을 때
            count++;
            end_index++;
            sum = sum + end_index;
        }
        else if (sum > N) // 현재 합이 답보다 클 때
        {
            sum = sum - start_index;
            start_index++;
        }
        else { // 현재 합이 답보다 작을 때 
            end_index++;
            sum = sum + end_index;
        }
    }

    cout << count << "/n";


}