#include<iostream>
using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int king = 1;
	int queen = 1;
	int rook = 2;
	int bishop = 2;
	int knight = 2;
	int pawn = 8;


	for (int i = 0; i < 6; i++)
	{
		cin >> n;
		switch (i)
		{
		case 0:
			king -= n;
			break;
		case 1:
			queen -= n;
			break;
		case 2:
			rook -= n;
			break;
		case 3:
			bishop -= n;
			break;
		case 4:
			knight -= n;
			break;
		case 5:
			pawn -= n;
			break;
		}
	}

	cout << king << " " << queen << " " << rook << " " << bishop << " " << knight << " " << pawn;


}
