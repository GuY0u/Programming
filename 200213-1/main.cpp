#include <iostream>
#include <time.h>

using namespace std;

int main() {

	//�����õ��ʱ�ȭ
	srand(time(NULL));

	int num; //������ ���� ����

	num = rand(); //num�� �������� �־���
	cout << "rand() = " << num << endl;
	
	num = rand() % 6 + 5; //�Ǽ�
	cout << "rand() = " << num << endl;

	num = rand() % 11 + 15; //��ȭ+1 
	cout << "rand() = " << num << endl;

	num = rand() % 21 + 30; //��ȭ+2 
	cout << "rand() = " << num << endl << endl;

	/*
	���� : rand() % (�ִ밪 - �ּҰ� + 1) + �ּҰ�
	*/

	//1. �Ǽ��϶� �������ڰ� 5~10
	num = rand() % (10 - 5 + 1) + 5;
	cout << "rand() = " << num << endl;
	//2. ��ȭ +1 �������ڰ� 15~25
	num = rand() % (25 - 15 + 1) + 15;
	cout << "rand() = " << num << endl;
	//3. ��ȭ +2 �������ڰ� 30~50
	num = rand() % (50 - 30 + 1) + 30;
	cout << "rand() = " << num << endl;


	return 0;
	
}