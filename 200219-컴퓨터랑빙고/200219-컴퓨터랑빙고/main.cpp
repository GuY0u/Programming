#include <iostream>
#include <time.h>

using namespace std;

//빙고판 만드는 함수
void bingoMaker(int number[])
{
	//빙고판 만들기
	for (int i = 0; i < 25; i++)
	{
		if (number[i] == 42)
		{
			cout << (char)number[i] << "\t";
		}
		else
		{
			cout << number[i] << "\t";
		}

		if (i % 5 == 4)
		{
			cout << "\n\n" << endl;
		}
	}
}

int main()
{
	//형변환 => 데이터 그릇을 강제로 바꾸는것!!
	//int a = 64;
	//cout << a << endl;
	//cout << (char)a << endl;
	//C++ 표준 형변환 4가지, 스태틱, 다이내믹, 리인터프리트, 컨스트
	//cout << static_cast<float>(a) << endl;


	//랜덤시드 초기화
	srand(time(NULL));

	//빙고판 숫자 25개
	int number[25];
	//컴퓨터 번호		
	int comNum[25];
	//컴퓨터 ?번호
	int comNumQ[25];

	//입력받을 숫자-user
	int inputUser;


	//빙고 카운트-user
	int bingoCountU = 0;
	//빙고 카운트-com
	int bingoCountC = 0;

	//빙고판에 사용될 user배열 변수 초기화
	for (int i = 0; i < 25; i++)
	{
		number[i] = i;
	}

	//빙고판에 사용될 com배열 변수 초기화
	for (int i = 0; i < 25; i++)
	{
		comNum[i] = i;
	}

	//단순 com화면에만 출력할 ?배열 초기화
	for (int i = 0; i < 25; i++)
	{
		comNumQ[i] = 63;

	}


	//user셔플 1000번
	for (int i = 0; i < 1000; i++)
	{
		int index1 = rand() % 25; //0 ~ 24
		int index2 = rand() % 25; //0 ~ 24
		int temp = number[index1];
		number[index1] = number[index2];
		number[index2] = temp;
	}

	//com셔플 1000번
	for (int i = 0; i < 2000; i++)
	{
		int index1 = rand() % 25; //0 ~ 24
		int index2 = rand() % 25; //0 ~ 24
		int temp = comNum[index1];
		comNum[index1] = comNum[index2];
		comNum[index2] = temp;
	}


	//물음표빙고판 만들기
	/*for (int i = 0; i < 25; i++)
	{
		if (comNumQ[i] == 63)
		{
			cout << (char)comNumQ[i] << "\t";
		}

		else
		{
			cout << comNumQ[i] << "\t";
		}

		if (i % 5 == 4)
		{
			cout << "\n\n" << endl;
		}
	}*/

	//무한반복
	while (true)
	{
		//system("cls"); //화면 지우기
		cout << "< 빙고게임 >" << endl;
		cout << "빙고카운트: " << bingoCountU << endl;
		cout << endl;

		//빙고판 만들기
		bingoMaker(number);

		//컴퓨터 정보
		cout << "< 컴퓨터 >" << endl;
		cout << "컴퓨터 빙고카운트: " << bingoCountC << endl;
		//컴퓨터 빙고판 만들기
		for (int i = 0; i < 25; i++)
		{
			if (comNumQ[i] == 63)
			{
				cout << (char)comNumQ[i] << "\t";
			}

			else
			{
				cout << comNumQ[i] << "\t";
			}

			if (i % 5 == 4)
			{
				cout << "\n\n" << endl;
			}
		}

		cout << "숫자를 입력해라: ";
		cin >> inputUser;


		//유저 입력값 배열에 넣음
		for (int i = 0; i < 25; i++)
		{
			if (number[i] == inputUser)
			{
				number[i] = 42;

				comNumQ[i] = comNum[inputUser];

			}

		}
		/*comNum = rand() % 25;
		if (userinput == comnum)
			다시입력

			comNUm 입력을ㄹ해
			근데 이게 이미 나온숫자야
			그럼 또 다시입력
			배열 3개
			1 내꺼
			2 컴퓨터
			3 컴퓨터 복사본*/




			bingoCountU = 0;

		//유저 비교 연산하기
		for (int i = 0; i < 5; i++)
		{
			//가로
			if (number[i * 5] == 42 &&
				number[i * 5 + 1] == 42 &&
				number[i * 5 + 2] == 42 &&
				number[i * 5 + 3] == 42 &&
				number[i * 5 + 4] == 42)
			{
				bingoCountU++;
			}
			//세로
			if (number[i] == 42 &&
				number[i + 5 * 1] == 42 &&
				number[i + 5 * 2] == 42 &&
				number[i + 5 * 3] == 42 &&
				number[i + 5 * 4] == 42)
			{
				bingoCountU++;
			}
		}
		//왼쪽대각
		if (number[0] == 42 &&
			number[6] == 42 &&
			number[12] == 42 &&
			number[18] == 42 &&
			number[24] == 42)
		{
			bingoCountU++;
		}
		//오른대각
		if (number[4] == 42 &&
			number[8] == 42 &&
			number[12] == 42 &&
			number[16] == 42 &&
			number[20] == 42)
		{
			bingoCountU++;
		}


		//컴퓨터 비교 연산하기
		for (int i = 0; i < 5; i++)
		{
			//가로
			if (comNumQ[i * 5] != 63 &&
				comNumQ[i * 5 + 1] != 63 &&
				comNumQ[i * 5 + 2] != 63 &&
				comNumQ[i * 5 + 3] != 63 &&
				comNumQ[i * 5 + 4] != 63)
			{
				bingoCountC++;
			}
			//세로
			if (comNumQ[i] != 63 &&
				comNumQ[i + 5 * 1] != 63 &&
				comNumQ[i + 5 * 2] != 63 &&
				comNumQ[i + 5 * 3] != 63 &&
				comNumQ[i + 5 * 4] != 63)
			{
				bingoCountC++;
			}
		}
		//왼쪽대각
		if (comNumQ[0] != 63 &&
			comNumQ[6] != 63 &&
			comNumQ[12] != 63 &&
			comNumQ[18] != 63 &&
			comNumQ[24] != 63)
		{
			bingoCountC++;
		}
		//오른대각
		if (comNumQ[4] != 63 &&
			comNumQ[8] != 63 &&
			comNumQ[12] != 63 &&
			comNumQ[16] != 63 &&
			comNumQ[20] != 63)
		{
			bingoCountC++;
		}

		//게임종료 (빙고카운트가 3일때 종료)
		//주의사항
		//빙고는 한번에 2개이상이 증가하기도 한다
		if (bingoCountU >= 3)
		{
			//system("cls"); //화면 지우기
			cout << "< 유저 >" << endl;
			cout << "유저 빙고카운트: " << bingoCountU << endl;
			cout << endl;

			//유저 빙고판 만들기
			bingoMaker(number);

			cout << "게임종료" << endl;
			break;
		}

		if (bingoCountC >= 3)
		{
			//system("cls"); //화면 지우기
			cout << "< 컴퓨터 >" << endl;
			cout << "컴퓨터 빙고카운트: " << bingoCountC << endl;
			cout << endl;

			//컴퓨터 빙고판 만들기
			for (int i = 0; i < 25; i++)
			{
				if (comNumQ[i] == 63)
				{
					cout << (char)comNumQ[i] << "\t";
				}

				else
				{
					cout << comNumQ[i] << "\t";
				}

				if (i % 5 == 4)
				{
					cout << "\n\n" << endl;
				}
			}


			cout << "게임종료" << endl;
			break;
		}





	}//end of while (true)

	return 0;
}