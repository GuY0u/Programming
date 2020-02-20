//숫자야구 게임
#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

int main() {

	srand(time(NULL));

	int comNum1 = rand() % 9 + 1;
	int comNum2 = rand() % 9 + 1;
	int comNum3 = rand() % 9 + 1;

	while (true)
	{

		int myNum1;
		int myNum2;
		int myNum3;

		//중복값 처리
		if (comNum1 == comNum2 || comNum2 == comNum3 || comNum1 == comNum3) {
			cout << "\n\n값을 재조정중입니다.\n\n";
			cout << "if문1번\n" << comNum1 << endl << comNum2 << endl << comNum3 << endl;
			comNum1 = rand() % 9 + 1;
			comNum2 = rand() % 9 + 1;
			comNum3 = rand() % 9 + 1;//랜덤값 재설정

		}
		else
		{
			cout << "if문2번\n" << comNum1 << endl << comNum2 << endl << comNum3 << endl;
			cout << "\n\n1~9 중복되지 않는 숫자 3개를 입력해주세요 : ";
			cin >> myNum1;
			cin >> myNum2;
			cin >> myNum3;

			//중복값 처리
			if (myNum1 == myNum2 || myNum2 == myNum3 || myNum1 == myNum3) {
				cout << "중복되는 값을 입력했습니다.\n다시입력해주세요.\n\n";
			}

			//
			
			//숫자야구 줄기

			//입력1이 스트라이크일경우
			if (myNum1 == comNum1) {

				//입력1,2 스트라이크경우
				if (myNum2 == comNum2) {
					if (myNum3 != comNum3) {

						cout << "2스트라이크 1아웃\n";

					}

					//3스트라이크경우
					if (myNum3 == comNum3) {
						cout << "스트라이크\n";
						break;
					}
				}

				//입력1,3 스트라이크 경우
				if (myNum3 == comNum3) {

					if (myNum2 != comNum2) {
						cout << "2스트라이크 1아웃\n";

					}
				}

				//입력2가 1볼
				if (myNum2 == comNum3) {

					//2볼
					if (myNum3 == comNum2) {
						cout << "1스트라이크 2볼\n";
					}

					if (myNum3 != comNum1 || myNum3 != comNum2 || myNum3 != comNum3) {
						cout << "1스트라이크 1볼\n";
					}
				}

				//입력3가 1볼
				if (myNum3 == comNum2) {
					if (myNum2 != comNum1 || myNum2 != comNum2 || myNum2 != comNum3) {
						cout << "1스트라이크 1볼\n";
					}
				}

			}

			//입력2가 스트라이크일경우
			if (myNum2 == comNum2) {

				//입력1가 1볼
				if (myNum1 == comNum3) {

					//2볼
					if (myNum1 == comNum3) {
						cout << "1스트라이크 2볼\n";
					}

					if (myNum1 != comNum1 || myNum1 != comNum2 || myNum1 != comNum3) {
						cout << "1스트라이크 1볼\n";
					}
				}

				//입력3가 1볼
				if (myNum3 == comNum1) {
					if (myNum3 != comNum1 || myNum3 != comNum2 || myNum3 != comNum3) {
						cout << "1스트라이크 1볼\n";
					}
				}

				//입력2,3이 스트라이크일 경우
				if (myNum3 == comNum3) {

					if (myNum1 != comNum1) {
						cout << "2스트라이크 1아웃\n";

					}
				}


			}

			//입력3가 스트라이크일경우
			if (myNum3 == comNum3) {

				//입력1가 1볼
				if (myNum1 == comNum2) {

					

					if (myNum1 != comNum1 || myNum1 != comNum2 || myNum1 != comNum3) {
						cout << "1스트라이크 1볼\n";
					}
				}

				//입력2가 1볼
				if (myNum2 == comNum1) {

					//2볼
					if (myNum2 == comNum1) {
						cout << "1스트라이크 2볼\n";
					}

					if (myNum2 != comNum1 || myNum2 != comNum2 || myNum2 != comNum3) {
						cout << "1스트라이크 1볼\n";
					}
				}

			}

			//3볼

			if (myNum1 == comNum2 || myNum1 == comNum3) {
				if (myNum2 == comNum1 || myNum2 == comNum3) {
					if (myNum3 == comNum1 || myNum3 == comNum2) {
						cout << "3볼\n";
					}
				}
			}

			//3아웃

			if (myNum1 != comNum1 || myNum1 != comNum2 || myNum1 != comNum3) {
				if (myNum2 != comNum1 || myNum2 != comNum2 || myNum2 != comNum3) {
					if (myNum3 != comNum1 || myNum3 != comNum2 || myNum3 != comNum3) {
						cout << "3아웃\n";
					}
				}
			}


		}
	

	}

	return 0;

}