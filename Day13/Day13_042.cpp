//// 42. 최소 공배수 구하기
//#include<iostream>
//using namespace std;
//
//int gdc(int a, int b);
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		int result = a * b / gdc(a, b);
//		cout << result << "\n";
//	}
//}
//
//int gdc(int a, int b)
//{
//	if (b == 0)
//	{
//		return a;
//	}
//	else
//	{
//		return gdc(b, a % b);  // 재귀 함수 형태로 구현
//	}
//}