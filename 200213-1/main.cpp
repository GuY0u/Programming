#include <iostream>
#include <time.h>

using namespace std;

int main() {

	//랜덤시드초기화
	srand(time(NULL));

	int num; //정수형 변수 선언

	num = rand(); //num에 랜덤값을 넣어줌
	cout << "rand() = " << num << endl;
	
	num = rand() % 6 + 5; //맨손
	cout << "rand() = " << num << endl;

	num = rand() % 11 + 15; //강화+1 
	cout << "rand() = " << num << endl;

	num = rand() % 21 + 30; //강화+2 
	cout << "rand() = " << num << endl << endl;

	/*
	공식 : rand() % (최대값 - 최소값 + 1) + 최소값
	*/

	//1. 맨손일때 랜덤숫자가 5~10
	num = rand() % (10 - 5 + 1) + 5;
	cout << "rand() = " << num << endl;
	//2. 강화 +1 랜덤숫자가 15~25
	num = rand() % (25 - 15 + 1) + 15;
	cout << "rand() = " << num << endl;
	//3. 강화 +2 랜덤숫자가 30~50
	num = rand() % (50 - 30 + 1) + 30;
	cout << "rand() = " << num << endl;


	return 0;
	
}