#include <iostream>
#include <time.h>

using namespace std;

int main()
{

	srand(time(NULL));

	//1~9��
	int number[10];
	//��ǻ�� �� 3��
	int comNum[3];
	//���� ���ð� 3��
	int myNum[3];

	//����Ƚ��
	int count = 0;

	//
	int strike = 0;
	int ball = 0;
	int out = 0;

	//�迭 �ʱ�ȭ
	for (int i = 0; i < 9; i++)
	{
		number[i] = i + 1;

	}

	


	while (true)
	{
		for (int i = 0; i < 10000; i++)
		{
			//�ζǹ�ȣ �迭�� �ε����� �����
			int index1 = rand() % 9; // 0 ~ 44
			int index2 = rand() % 9; // 0 ~ 44
			int temp = number[index1];
			number[index1] = number[index2];
			number[index2] = temp;
		}

		for (int i = 0; i < 3; i++)
		{
			comNum[i] = number[i];
			//ġƮ
			cout << comNum[i] << ", ";
		}

		cout << "��ǻ���� ���� �Ҵ�Ǿ����ϴ�. \n";
		cout << comNum[0] << ", " << comNum[1] << ", " << comNum[2];
		
		while (true)
		{
			for (int i = 0; i < 3; i++ ) 
			{
				cout << "���� �Է����ּ��� : ";
				cin >> myNum[i];
			}
			break;
		}

		

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if(myNum[i] = comNum[j])
				{

					if (i == j)
					{
						cout << "��Ʈ����ũ";
						strike++;

					}
					else
					{
						cout << "��";
						ball++;

					}
				}
			}
		}

		

		cout << "��Ʈ����ũ : " << strike << "�� : " << ball << "�ƿ� : " << out << endl;

		if (strike == 3) {
			cout << "3��Ʈ����ũ ���� ��";
			break;
		}

	}

	return 0;

}