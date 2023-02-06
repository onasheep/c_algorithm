#include <iostream>
using namespace std;

/*
수 N개가 주어졌을 때, i번째 수부터 j번째 수까지 합을 구하는 프로그램을 작성하시오.
입력: 1번쨰 줄 수의 갯수 N와 질문 갯수 M , 2번째 줄에는 N개의 수.
출력: 총 M개의 줄에 입력으로 주어진 i번째 수부터 j번째 수까지 합을 출력한다.
*/
int main()
{
    ios::sync_with_stdio(false);
    // C++ iostream의 동기화 비활성화(독립 버퍼 수행으로 속도올림)
    cin.tie(NULL);
    cout.tie(NULL);
    // cin, cout은 하나로 묶여 있는데 각 작업전에 버퍼를 비자동으로 비워준다.
    // 이 작업을 생략하기 떄문에 속도가 더 빨라진다.

    int suNo, quizNo;
    cin >> suNo >> quizNo;

    int S[100001] = {};

    for (int i = 1; i <= suNo; i++)
    {
        int temp;
        cin >> temp;
        S[i] = S[i - 1] + temp;
    }

    for (int i = 0; i < quizNo; i++)
    {
        int start, end;
        cin >> start >> end;
        cout << S[end] - S[start - 1] << "/n";
    }
}