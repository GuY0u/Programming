#include <iostream>
#include <time.h>
#include <string>
#include <Windows.h>

using namespace std;

// 카드 숫자 함수
char incoCardNum(int i) {

	if (i % 13 == 0)
	{
		cout << "A ";
	}
	else if (i % 13 == 1)
	{
		cout << "2 ";
	}
	else if (i % 13 == 2)
	{
		cout << "3 ";
	}
	else if (i % 13 == 3)
	{
		cout << "4 ";
	}
	else if (i % 13 == 4)
	{
		cout << "5 ";
	}
	else if (i % 13 == 5)
	{
		cout << "6 ";
	}
	else if (i % 13 == 6)
	{
		cout << "7 ";
	}
	else if (i % 13 == 7)
	{
		cout << "8 ";
	}
	else if (i % 13 == 8)
	{
		cout << "9 ";
	}
	else if (i % 13 == 9)
	{
		cout << "10 ";
	}
	else if (i % 13 == 10)
	{
		cout << "J ";
	}
	else if (i % 13 == 11)
	{
		cout << "Q ";
	}
	else if (i % 13 == 12)
	{
		cout << "K ";
	}
	else {

	}

	return 0;
}


//카드 모양 함수
char incoCard(int i)
{


	if (i / 13 == 0)
	{
		cout << " ♠";
	}
	else if (i / 13 == 1)
	{
		cout << " ♥";
	}
	else if (i / 13 == 2)
	{
		cout << " ♣";
	}
	else if (i / 13 == 3)
	{
		cout << " ◆";
	}
	else {

	}


	return 0;

};




// ♠ ♥ ♣ ♦
int main()
{

	srand(time(NULL));
	//0~51 52개의 숫자를 담을 배열
	int number[52];
	//뽑을카드
	int cardNumber[52];

	for (int i = 0; i < 52; i++)
	{
		cardNumber[i] = i;
	}


	//number[] 배열 값 초기화 : 0 ~ 53
	for (int i = 0; i < 52; i++)
	{
		number[i] = i; //number[0] = 0, number[9] = 9
	}

	//셔플 1000번
	for (int i = 0; i < 1000; i++)
	{
		int index1 = rand() % 52; // 0 ~ 51번 인덱스
		int index2 = rand() % 52; // 0 ~ 51번 인덱스
		int temp = number[index1];
		number[index1] = number[index2];
		number[index2] = temp;
	}


	//치트
	//cout << "치트: " << comNumber[0] << comNumber[1] << comNumber[2] << endl;
	for (int i = 0; i < 52; i++)
	{
		//컴숫자에 셔플된숫자 대입
		cardNumber[i] = number[i];
	}


	cout << "게임을 시작합니다.\n\n";

	//턴
	int count = 1;
	//전재산
	int money = 10000;
	//배팅값
	int bet = 0;
	//카드를 버리기위해 카운트값
	int cardCount = 0;

	//선택값
	int select;


	//치트
	cout << "치트\n";
	for (int i = 0; i < 52; i++)
	{
		cout << incoCardNum(cardNumber[i]) << incoCard(cardNumber[i]);
	}

	for (int i = 0; i < 52; i++)
	{
		//값 배열
		//cout << cardNumber[i] << endl;



		cout << "\n******************************************************" << endl;

		//1~5번째 카드 보여주기
		cout << endl << "카드 : \n";
		//cout << endl << incoCardNum(cardNumber[cardCount]) << incoCard(cardNumber[cardCount]) << "\t\t" << incoCardNum(cardNumber[cardCount + 1]) << incoCard(cardNumber[cardCount + 1]) << "\t\t" << incoCardNum(cardNumber[cardCount + 2]) << incoCard(cardNumber[cardCount + 2]) << incoCardNum(cardNumber[cardCount + 3]) << incoCard(cardNumber[cardCount + 3]) << "\t\t" << incoCardNum(cardNumber[cardCount + 4]) << incoCard(cardNumber[cardCount + 4]) << endl;
		//cout << endl << incoCardNum(cardNumber[cardCount + 4]) << incoCard(cardNumber[cardCount + 4]) << incoCardNum(cardNumber[cardCount + 3]) << incoCard(cardNumber[cardCount + 3]) << incoCardNum(cardNumber[cardCount + 2]) << incoCard(cardNumber[cardCount + 2]) << incoCardNum(cardNumber[cardCount + 1]) << incoCard(cardNumber[cardCount + 1]) << incoCardNum(cardNumber[cardCount]) << incoCard(cardNumber[cardCount]) << endl;
		//선택지

		//함수에서 cout을 해줬을때 위에처럼 한번더 cout을 넣어주면 값을 순서대로 출력하게 하였을때 반대로 나왔음.
		incoCard(cardNumber[cardCount]), incoCardNum(cardNumber[cardCount]);
		incoCard(cardNumber[cardCount + 1]), incoCardNum(cardNumber[cardCount + 1]);
		incoCard(cardNumber[cardCount + 2]), incoCardNum(cardNumber[cardCount + 2]);
		incoCard(cardNumber[cardCount + 3]), incoCardNum(cardNumber[cardCount + 3]);
		incoCard(cardNumber[cardCount + 4]), incoCardNum(cardNumber[cardCount + 4]);



		//반복문을 줘서 일치하지 않을경우 계속 순환할수 있도록 해줌


		cout << "\n\n1.Low 2.High 3.Seven\n\n";
		cout << "\n\n자!! 선택해주세요 : ";
		cin >> select;
		cout << "\n\n";

		//세븐하이로우 선택


		if (select == 1)
		{
			cout << "로우 선택하셨습니다.\n";
		}
		else if (select == 2)
		{
			cout << "하이 선택하셨습니다.\n";
		}
		else if (select == 3)
		{
			cout << "세븐 선택하셨습니다.\n";
		}
		else
		{
			cout << "옳지 못한 값을 입력하셨습니다.\n";
			continue;
		}


		//반복문을 줘서 일치하지 않을경우 계속 순환할수 있도록 해줌

		cout << "재산 : " << money << endl << endl;

		cout << "배팅값은 100이상!\n";
		cout << "배팅하십셔 : ";

		//배팅값 입력
		cin >> bet;

		//배팅값 조건
		if (bet > money)
		{
			cout << "배팅값이 재산보다 많습니다.\n";
			continue;
		}
		else if (bet < 100)
		{
			cout << "최소 배팅값에 미치지 못합니다.\n";
			continue;
		}
		else
		{
			cout << "배팅 완료.";
			Sleep(2000);
		}


		cout << "\n\n******************************************************" << endl;


		cout << endl << "카트 보여줍쇼!\n\n\n";

		cout << "카드 : ";
		cout << incoCardNum(cardNumber[cardCount + 5]) << incoCard(cardNumber[cardCount + 5]) << endl;
		//사이값 조건

		//하이
		if (int(cardNumber[cardCount + 5] % 13) > 7)
		{
			cout << "\n\n하이\n\n";
			//선택지가 로우일때
			if (select == 1)
			{
				cout << "\n\n배팅 실패\n\n";
				money -= bet;
			}
			//선택지가 하이일때
			else if (select == 2)
			{
				cout << "\n\n배팅 성공\n\n";
				money += bet;
			}
			//선택지가 세븐일때
			else if (select == 3)
			{
				cout << "\n\n배팅 실패\n\n";
				money -= bet;
			}
		}
		//로우 일때
		else if (int(cardNumber[cardCount + 5] % 13) < 6)
		{
			cout << "\n\n로우\n\n";
			//선택지가 로우일때
			if (select == 1)
			{
				cout << "\n\n배팅 성공\n\n";
				money += bet;
			}
			//선택지가 하이일때
			else if (select == 2)
			{
				cout << "\n\n배팅 실패\n\n";
				money -= bet;
			}
			//선택지가 세븐일때
			else if (select == 3)
			{
				cout << "\n\n배팅 실패\n\n";
				money -= bet;
			}
		}
		//세븐 일때
		else if (int(cardNumber[cardCount + 5] % 13) == 6)
		{
			cout << "\n\n세븐!!!\n\n";
			//선택지가 로우일때
			if (select == 1)
			{
				cout << "\n\n배팅 성공\n\n";
				money += bet;
			}
			//선택지가 하이일때
			else if (select == 2)
			{
				cout << "\n\n배팅 실패\n\n";
				money -= bet;
			}
			//선택지가 세븐일때
			else if (select == 3)
			{
				cout << "\n\n배팅 성공 x2!!!!\n\n";
				money += bet * 2;
			}
		}



		if (money == 0)
		{
			cout << "탕진\n";
			break;
		}




		cout << "******************************************************" << endl;



		//턴증가
		count++;
		cardCount++;
		//턴이 10일시
		if (count == 10)
		{
			cout << "집에 갈 시간\n";
			break;

		}
	}






	return 0;


}