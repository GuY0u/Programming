#include <iostream>
#include <time.h>

using namespace std;



int main() {

	srand(time(NULL));

	//25개의 퍼즐 숫자
	int num[25];
	//움직일 나! ->배열에 넣어줄 내위치
	int me = 24;
	//스위칭할때 징검다리 역할
	int nNum=0;


	//num배열 초기화
	for (int i = 0; i < 25; i++)
	{
		num[i] = i;
	}

	//num 셔플
	for (int i = 0; i < 1000; i++)
	{
		int index1 = rand() % 25; // 0 ~ 24번 인덱스
		int index2 = rand() % 25; // 0 ~ 24번 인덱스
		int temp = num[index1];
		num[index1] = num[index2];
		num[index2] = temp;
	}

	for (int i = 0; i < 25; i++)
	{


		if (num[i] == 0)
		{

			cout << num[24]<<", "<< num[i];
			cout << "\n\n게임판 재조정중\n\n\n";
			nNum = num[24];
			num[24] = 0;
			num[i] = nNum;
		}
	}

	int select;

	//움직이는 부분
	while (true)
	{
		//화면 클린역할
		system("cls");

		//25개의 값이 담긴 배열을 나열해 줄 for문
		for (int i = 0; i < 25; i++)
		{

			//숫자판을 띄어주는 부분
			cout << num[i] << "\t";
			if ((i + 1) % 5 == 0) {
				cout << endl << endl << endl;
			}
		}

		cout << "\n\n\n움직이기 (상:8, 좌:4, 우:6, 하:2) : ";
		cin >> select;
		cout << endl <<endl;

		//상 : -5 하 : +5 좌: -1 우 : +1
		switch (select)
		{
		case 8:
			if (me / 5 == 0)
			{
				cout << "\n\n위로 갈수가 없다.\n\n";
				continue;
			}
			else
			{
				//빈값에 옮기기전 값 num[me] = 0
				/*
				nNum = num[me - 5];
				num[me] = nNum;
				num[me - 5] = 0;
				*/

				nNum = num[me - 5];
				num[me - 5] = num[me];
				num[me] = nNum;

				me -= 5;
				break;
			}
		case 4:
			if (me % 5 == 0)
			{
				cout << "\n\n왼쪽으로 갈수가 없어요...\n\n";
				continue;
			}
			else
			{
				//이 방식보다는 아래 방식이 더 나음
				/*
				nNum = num[me - 1];
				num[me] = nNum;
				num[me - 1] = 0;
				*/

				nNum = num[me - 1];
				num[me - 1] = num[me];
				num[me] = nNum;

				me -= 1;
				break;
			}

		case 6:
			if (me == 4 || me == 9 || me == 14 || me == 19 || me == 24)
			{
				cout << "\n\n오른쪽으로 갈수가 없어요...\n\n";
				continue;
			}
			else
			{
				/*
				nNum = num[me + 1];
				num[me] = nNum;
				num[me + 1] = 0;
				*/

				nNum = num[me + 1];
				num[me + 1] = num[me];
				num[me] = nNum;

				me += 1;
				break;
			}

		case 2:
			if (me / 5 == 4)
			{
				cout << "\n\n아래으로 갈수가 없어요...\n\n";
				continue;
			}
			else
			{

				/*
				nNum = num[me + 5];
				num[me] = nNum;
				num[me + 5] = 0;
				*/

				nNum = num[me + 5];
				num[me + 5] = num[me];
				num[me] = nNum;

				me += 5;
				break;
			}
		default:
			cout << "\n\n옳지 못한값을 입력!\n\n";
			continue;
		}
		

	}


	return 0;

}


