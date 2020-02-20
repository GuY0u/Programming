#include <iostream>
#include <time.h>

using namespace std;

//변수에는 숫자들이 담겨있는데
//숫자를 문자화 시켜줘서 가독성을 높여준다.
//나중에 캐릭터 상태값을 표시할때 많이 사용한다.
enum GameRule {
	가위=1, 바위, 보
};


int main() {

	while (true) {

		srand(time(NULL));

		int rspCom = rand() % 3 + 1;

		int rspUser;

		cout << "가위바위보 게임입니다.\n 가위(1번), 바위(2번), 보(3번)중 숫자를 선택해주세요 : ";

		cin >> rspUser;


		if (rspUser < 0 || rspUser>3) {
			cout << "옳지 않은 값입니다.\n\n";
		}

		if (rspUser == 1) {
			cout << "가위를 선택하셨습니다.\n\n";
			if (rspCom == 1) {
				cout << "컴퓨터숫자 : " << rspCom << endl;
				cout << "비기셨습니다.\n\n";
			}
			else if (rspCom == 2) {
				cout << "컴퓨터숫자 : " << rspCom << endl;
				cout << "패배하셨습니다.\n\n";
			}
			else if (rspCom == 3) {
				cout << "컴퓨터숫자 : " << rspCom << endl;
				cout << "승리하셨습니다.\n\n";
				break;
			}
		}

		if (rspUser == 2) {
			cout << "바위를 선택하셨습니다.\n\n";
			if (rspCom == 1) {
				cout << "컴퓨터숫자 : " << rspCom << endl;
				cout << "승리하셨습니다.\n\n";
				break;
			}
			else if (rspCom == 2) {
				cout << "컴퓨터숫자 : " << rspCom << endl;
				cout << "비기셨습니다.\n\n";
			}
			else if (rspCom == 3) {
				cout << "컴퓨터숫자 : " << rspCom << endl;
				cout << "패배하셨습니다.\n\n";
			}
		}

		if (rspUser == 3) {
			cout << "보를 선택하셨습니다.\n\n";
			if (rspCom == 1) {
				cout << "컴퓨터숫자 : " << rspCom << endl;
				cout << "패배하셨습니다.\n\n";
			}
			else if (rspCom == 2) {
				cout << "컴퓨터숫자 : " << rspCom << endl;
				cout << "승리하셨습니다.\n\n";
				break;
			}
			else if (rspCom == 3) {
				cout << "컴퓨터숫자 : " << rspCom << endl;
				cout << "비기셨습니다.\n\n";
			}
		}

	}

	return 0;

}