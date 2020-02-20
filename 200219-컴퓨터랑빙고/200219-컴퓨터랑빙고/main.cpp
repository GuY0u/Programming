#include <iostream>
#include <time.h>

using namespace std;

//������ ����� �Լ�
void bingoMaker(int number[])
{
	//������ �����
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
	//����ȯ => ������ �׸��� ������ �ٲٴ°�!!
	//int a = 64;
	//cout << a << endl;
	//cout << (char)a << endl;
	//C++ ǥ�� ����ȯ 4����, ����ƽ, ���̳���, ����������Ʈ, ����Ʈ
	//cout << static_cast<float>(a) << endl;


	//�����õ� �ʱ�ȭ
	srand(time(NULL));

	//������ ���� 25��
	int number[25];
	//��ǻ�� ��ȣ		
	int comNum[25];
	//��ǻ�� ?��ȣ
	int comNumQ[25];

	//�Է¹��� ����-user
	int inputUser;


	//���� ī��Ʈ-user
	int bingoCountU = 0;
	//���� ī��Ʈ-com
	int bingoCountC = 0;

	//�����ǿ� ���� user�迭 ���� �ʱ�ȭ
	for (int i = 0; i < 25; i++)
	{
		number[i] = i;
	}

	//�����ǿ� ���� com�迭 ���� �ʱ�ȭ
	for (int i = 0; i < 25; i++)
	{
		comNum[i] = i;
	}

	//�ܼ� comȭ�鿡�� ����� ?�迭 �ʱ�ȭ
	for (int i = 0; i < 25; i++)
	{
		comNumQ[i] = 63;

	}


	//user���� 1000��
	for (int i = 0; i < 1000; i++)
	{
		int index1 = rand() % 25; //0 ~ 24
		int index2 = rand() % 25; //0 ~ 24
		int temp = number[index1];
		number[index1] = number[index2];
		number[index2] = temp;
	}

	//com���� 1000��
	for (int i = 0; i < 2000; i++)
	{
		int index1 = rand() % 25; //0 ~ 24
		int index2 = rand() % 25; //0 ~ 24
		int temp = comNum[index1];
		comNum[index1] = comNum[index2];
		comNum[index2] = temp;
	}


	//����ǥ������ �����
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

	//���ѹݺ�
	while (true)
	{
		//system("cls"); //ȭ�� �����
		cout << "< ������� >" << endl;
		cout << "����ī��Ʈ: " << bingoCountU << endl;
		cout << endl;

		//������ �����
		bingoMaker(number);

		//��ǻ�� ����
		cout << "< ��ǻ�� >" << endl;
		cout << "��ǻ�� ����ī��Ʈ: " << bingoCountC << endl;
		//��ǻ�� ������ �����
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

		cout << "���ڸ� �Է��ض�: ";
		cin >> inputUser;


		//���� �Է°� �迭�� ����
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
			�ٽ��Է�

			comNUm �Է�������
			�ٵ� �̰� �̹� ���¼��ھ�
			�׷� �� �ٽ��Է�
			�迭 3��
			1 ����
			2 ��ǻ��
			3 ��ǻ�� ���纻*/




			bingoCountU = 0;

		//���� �� �����ϱ�
		for (int i = 0; i < 5; i++)
		{
			//����
			if (number[i * 5] == 42 &&
				number[i * 5 + 1] == 42 &&
				number[i * 5 + 2] == 42 &&
				number[i * 5 + 3] == 42 &&
				number[i * 5 + 4] == 42)
			{
				bingoCountU++;
			}
			//����
			if (number[i] == 42 &&
				number[i + 5 * 1] == 42 &&
				number[i + 5 * 2] == 42 &&
				number[i + 5 * 3] == 42 &&
				number[i + 5 * 4] == 42)
			{
				bingoCountU++;
			}
		}
		//���ʴ밢
		if (number[0] == 42 &&
			number[6] == 42 &&
			number[12] == 42 &&
			number[18] == 42 &&
			number[24] == 42)
		{
			bingoCountU++;
		}
		//�����밢
		if (number[4] == 42 &&
			number[8] == 42 &&
			number[12] == 42 &&
			number[16] == 42 &&
			number[20] == 42)
		{
			bingoCountU++;
		}


		//��ǻ�� �� �����ϱ�
		for (int i = 0; i < 5; i++)
		{
			//����
			if (comNumQ[i * 5] != 63 &&
				comNumQ[i * 5 + 1] != 63 &&
				comNumQ[i * 5 + 2] != 63 &&
				comNumQ[i * 5 + 3] != 63 &&
				comNumQ[i * 5 + 4] != 63)
			{
				bingoCountC++;
			}
			//����
			if (comNumQ[i] != 63 &&
				comNumQ[i + 5 * 1] != 63 &&
				comNumQ[i + 5 * 2] != 63 &&
				comNumQ[i + 5 * 3] != 63 &&
				comNumQ[i + 5 * 4] != 63)
			{
				bingoCountC++;
			}
		}
		//���ʴ밢
		if (comNumQ[0] != 63 &&
			comNumQ[6] != 63 &&
			comNumQ[12] != 63 &&
			comNumQ[18] != 63 &&
			comNumQ[24] != 63)
		{
			bingoCountC++;
		}
		//�����밢
		if (comNumQ[4] != 63 &&
			comNumQ[8] != 63 &&
			comNumQ[12] != 63 &&
			comNumQ[16] != 63 &&
			comNumQ[20] != 63)
		{
			bingoCountC++;
		}

		//�������� (����ī��Ʈ�� 3�϶� ����)
		//���ǻ���
		//����� �ѹ��� 2���̻��� �����ϱ⵵ �Ѵ�
		if (bingoCountU >= 3)
		{
			//system("cls"); //ȭ�� �����
			cout << "< ���� >" << endl;
			cout << "���� ����ī��Ʈ: " << bingoCountU << endl;
			cout << endl;

			//���� ������ �����
			bingoMaker(number);

			cout << "��������" << endl;
			break;
		}

		if (bingoCountC >= 3)
		{
			//system("cls"); //ȭ�� �����
			cout << "< ��ǻ�� >" << endl;
			cout << "��ǻ�� ����ī��Ʈ: " << bingoCountC << endl;
			cout << endl;

			//��ǻ�� ������ �����
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


			cout << "��������" << endl;
			break;
		}





	}//end of while (true)

	return 0;
}