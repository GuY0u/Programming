#include <iostream>
#include <time.h>

using namespace std;


int main() {
	
	srand(time(NULL));

	int myNum[6];
	int number[45]; //10���� ���� ����
	int count=0;
	//������ ���� ��� �ִ� �迭 �� �ʱ�ȭ
	for (int i = 0; i < 45; i++)
	{
		number[i] = i + 1;
	}

	//���þ˰���
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

		cout << "[�ζǹ�ȣ " << i << "��°] = " << number[i] << endl;


	}

	//���� ���
	for (int i = 0; i < 6; i++)
	{

		cout << "���Է� : ";
		cin >> myNum[i];

		number[i];


	}

	for (int i = 0; i < 6; i++)
	{

		if (myNum[i] == number[i]) {
			count++;
		}

		cout << "[����ȣ " << i << "��°] = " << myNum[i] << endl;

	}

	cout << count << endl;

	


	return 0;
} 


/*
  //���þ˰���
	for (int i = 0; i < 100; i++)
	{
		int index1 = rand() % 10; // 0 ~ 9
		int index2 = rand() % 10; // 0 ~ 9
		int temp = number[index1];
		number[index1] = number[index2];
		number[index2] = temp;
	}

	//���� ���
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "] = " << number[i] << endl;
	}
*/

//�迭 ��� ����
//1. �츮�� ���������� (�밡�ټ� �ݺ� ������ �ٿ���)
//2. ���ڿ��� ����ϰ����ؼ�
