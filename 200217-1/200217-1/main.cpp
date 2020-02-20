#include <iostream>
#include <time.h>

using namespace std;

int main()
{

	srand(time(NULL));

	//1~9값
	int number[10];
	//컴퓨터 값 3개
	int comNum[3];
	//나의 선택값 3개
	int myNum[3];

	//게임횟수
	int count = 0;

	//
	int strike = 0;
	int ball = 0;
	int out = 0;

	//배열 초기화
	for (int i = 0; i < 9; i++)
	{
		number[i] = i + 1;

	}

	


	while (true)
	{
		for (int i = 0; i < 10000; i++)
		{
			//로또번호 배열의 인덱스로 사용함
			int index1 = rand() % 9; // 0 ~ 44
			int index2 = rand() % 9; // 0 ~ 44
			int temp = number[index1];
			number[index1] = number[index2];
			number[index2] = temp;
		}

		for (int i = 0; i < 3; i++)
		{
			comNum[i] = number[i];
			//치트
			cout << comNum[i] << ", ";
		}

		cout << "컴퓨터의 값이 할당되었습니다. \n";
		cout << comNum[0] << ", " << comNum[1] << ", " << comNum[2];
		
		while (true)
		{
			for (int i = 0; i < 3; i++ ) 
			{
				cout << "값을 입력해주세요 : ";
				cin >> myNum[i];
			}
			break;
		}

		

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if(myNum[i] = comNum[j])
				{

					if (i == j)
					{
						cout << "스트라이크";
						strike++;

					}
					else
					{
						cout << "볼";
						ball++;

					}
				}
			}
		}

		

		cout << "스트라이크 : " << strike << "볼 : " << ball << "아웃 : " << out << endl;

		if (strike == 3) {
			cout << "3스트라이크 게임 끝";
			break;
		}

	}

	return 0;

}