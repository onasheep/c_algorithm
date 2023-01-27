#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; // N = 수의 갯수, M = 각각의 수를 나누는 수
    cin >> N >> M;
    vector<long> S(N, 0);
    vector<long> C(M, 0);

    long answer = 0;
    cin >> S[0]; // N개의 수를 가지고 0으로 초기화된 벡터

    for (int i = 0; i < N; i++)
    {
        int temp = 0;
        cin >> temp;
        S[i] = S[i - 1] + temp;
    }
    for (int i = 0; i < N; i++)
    {
        int remainder = S[i] % M;
        // 0 ~ i 까지의 구간 합 자체가 0 일때 정답 더하기
        if (remainder == 0) {
            answer++;
        }
        // 나머지가 같은 인덱스의 갯수 세기
        C[remainder]++;
        for (int i = 0; i < M; i++)
        {
            if (C[1] > 1)
            {
                // 나머지가 같은 인덱스 중 2개를 뽑는 경우의 수를 더하기
                answer = answer + (C[i] * (C[i] - 1) / 2);
            }
        }

        cout << answer << "/n";
    }
}