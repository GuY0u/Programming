#include <iostream>
#include <time.h>

using namespace std;



int main() {

	srand(time(NULL));

	//25���� ���� ����
	int num[25];
	//������ ��! ->�迭�� �־��� ����ġ
	int me = 24;
	//����Ī�Ҷ� ¡�˴ٸ� ����
	int nNum=0;


	//num�迭 �ʱ�ȭ
	for (int i = 0; i < 25; i++)
	{
		num[i] = i;
	}

	//num ����
	for (int i = 0; i < 1000; i++)
	{
		int index1 = rand() % 25; // 0 ~ 24�� �ε���
		int index2 = rand() % 25; // 0 ~ 24�� �ε���
		int temp = num[index1];
		num[index1] = num[index2];
		num[index2] = temp;
	}

	for (int i = 0; i < 25; i++)
	{


		if (num[i] == 0)
		{

			cout << num[24]<<", "<< num[i];
			cout << "\n\n������ ��������\n\n\n";
			nNum = num[24];
			num[24] = 0;
			num[i] = nNum;
		}
	}

	int select;

	//�����̴� �κ�
	while (true)
	{
		//ȭ�� Ŭ������
		system("cls");

		//25���� ���� ��� �迭�� ������ �� for��
		for (int i = 0; i < 25; i++)
		{

			//�������� ����ִ� �κ�
			cout << num[i] << "\t";
			if ((i + 1) % 5 == 0) {
				cout << endl << endl << endl;
			}
		}

		cout << "\n\n\n�����̱� (��:8, ��:4, ��:6, ��:2) : ";
		cin >> select;
		cout << endl <<endl;

		//�� : -5 �� : +5 ��: -1 �� : +1
		switch (select)
		{
		case 8:
			if (me / 5 == 0)
			{
				cout << "\n\n���� ������ ����.\n\n";
				continue;
			}
			else
			{
				//�󰪿� �ű���� �� num[me] = 0
				/*
				nNum = num[me - 5];
				num[me] = nNum;
				num[me - 5] = 0;
				*/

				nNum = num[me - 5];
				num[me - 5] = num[me];
				num[me] = nNum;

				me -= 5;
				break;
			}
		case 4:
			if (me % 5 == 0)
			{
				cout << "\n\n�������� ������ �����...\n\n";
				continue;
			}
			else
			{
				//�� ��ĺ��ٴ� �Ʒ� ����� �� ����
				/*
				nNum = num[me - 1];
				num[me] = nNum;
				num[me - 1] = 0;
				*/

				nNum = num[me - 1];
				num[me - 1] = num[me];
				num[me] = nNum;

				me -= 1;
				break;
			}

		case 6:
			if (me == 4 || me == 9 || me == 14 || me == 19 || me == 24)
			{
				cout << "\n\n���������� ������ �����...\n\n";
				continue;
			}
			else
			{
				/*
				nNum = num[me + 1];
				num[me] = nNum;
				num[me + 1] = 0;
				*/

				nNum = num[me + 1];
				num[me + 1] = num[me];
				num[me] = nNum;

				me += 1;
				break;
			}

		case 2:
			if (me / 5 == 4)
			{
				cout << "\n\n�Ʒ����� ������ �����...\n\n";
				continue;
			}
			else
			{

				/*
				nNum = num[me + 5];
				num[me] = nNum;
				num[me + 5] = 0;
				*/

				nNum = num[me + 5];
				num[me + 5] = num[me];
				num[me] = nNum;

				me += 5;
				break;
			}
		default:
			cout << "\n\n���� ���Ѱ��� �Է�!\n\n";
			continue;
		}
		

	}


	return 0;

}


