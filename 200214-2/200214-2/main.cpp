#include <iostream>
#include <time.h>

using namespace std;


int main() {
	
	srand(time(NULL));

	int myNum[6];
	int number[45]; //10개의 방을 만듬
	int count=0;
	//쓰레기 값이 담겨 있는 배열 값 초기화
	for (int i = 0; i < 45; i++)
	{
		number[i] = i + 1;
	}

	//셔플알고리즘
	for (int i = 0; i < 100; i++)
	{
		int index1 = rand() % 45; // 0 ~ 9
		int index2 = rand() % 45; // 0 ~ 9
		int temp = number[index1];
		number[index1] = number[index2];
		number[index2] = temp;
	}

	for (int i = 0; i < 6; i++)
	{

		cout << "[로또번호 " << i << "번째] = " << number[i] << endl;


	}

	//셔플 출력
	for (int i = 0; i < 6; i++)
	{

		cout << "값입력 : ";
		cin >> myNum[i];

		number[i];


	}

	for (int i = 0; i < 6; i++)
	{

		if (myNum[i] == number[i]) {
			count++;
		}

		cout << "[내번호 " << i << "번째] = " << myNum[i] << endl;

	}

	cout << count << endl;

	


	return 0;
} 


/*
  //셔플알고리즘
	for (int i = 0; i < 100; i++)
	{
		int index1 = rand() % 10; // 0 ~ 9
		int index2 = rand() % 10; // 0 ~ 9
		int temp = number[index1];
		number[index1] = number[index2];
		number[index2] = temp;
	}

	//셔플 출력
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "] = " << number[i] << endl;
	}
*/

//배열 사용 이유
//1. 우리가 편해지려고 (노가다성 반복 수행을 줄여줌)
//2. 문자열을 사용하가위해서
