#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

int main() {

	//업다운게임 툴
	//1.입력받아야 한다.
	//2.찾아야 하는 숫자
	//3.비교
	//-언제까지 비교할것인가
	//-내가 입력한 숫자와 랜덤숫자가 같을때까지

	//rand() -> 랜덤함수 -> 함수이름() 이와 같은 형태
	//rand() -> 난수발생

	srand(time(NULL)); //랜덤값을 계속 리셋시켜줌

	int count = 0; //시도회수 변수

	int randomNum = rand() % 100; //랜덤변수 %100을 해주어 0~99값 중에 하나가 나옴
	//cout << "난수 : " << randomnum << endl;





	while (true) //true 무한반복 루프
	{
		//count++;

		int answer;
		cout << "0~99사이의 숫자를 입력하세요 : ";
		cin >> answer;

		if (answer > 100 || answer < 0) {
			cout << "입력하신값이 옳지 않습니다.\n\n";
		}
		else if (answer > randomNum) {
			cout << "입력값이 더 큽니다.\n\n";
			count++;
		}
		else if (answer < randomNum) {
			cout << "랜덤값이 더 큽니다.\n\n";
			count++;
		}
		else if (answer == randomNum) {
			cout << "정답입니다.\n\n";
			cout << "시도횟수 : " << count << "\n\n";
			break;
		}

	}


	return 0;
}


//RPG
//1. 캐릭터
//  -레벨, 스킬, 장비등등, 클래스
//2. 캐릭터를 따라다니는 카메라
//3. 장비
//4. 스킬구조
//5. 몬스터(3종)
//6. 보스
//7. UI
//8. 지형

//while 무한반복에 텀을 주고싶을때 '#include <Windows.h>'을 선언해주고 Sleep을 사용한다.