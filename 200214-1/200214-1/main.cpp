//���ھ߱� ����
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

		//�ߺ��� ó��
		if (comNum1 == comNum2 || comNum2 == comNum3 || comNum1 == comNum3) {
			cout << "\n\n���� ���������Դϴ�.\n\n";
			cout << "if��1��\n" << comNum1 << endl << comNum2 << endl << comNum3 << endl;
			comNum1 = rand() % 9 + 1;
			comNum2 = rand() % 9 + 1;
			comNum3 = rand() % 9 + 1;//������ �缳��

		}
		else
		{
			cout << "if��2��\n" << comNum1 << endl << comNum2 << endl << comNum3 << endl;
			cout << "\n\n1~9 �ߺ����� �ʴ� ���� 3���� �Է����ּ��� : ";
			cin >> myNum1;
			cin >> myNum2;
			cin >> myNum3;

			//�ߺ��� ó��
			if (myNum1 == myNum2 || myNum2 == myNum3 || myNum1 == myNum3) {
				cout << "�ߺ��Ǵ� ���� �Է��߽��ϴ�.\n�ٽ��Է����ּ���.\n\n";
			}

			//
			
			//���ھ߱� �ٱ�

			//�Է�1�� ��Ʈ����ũ�ϰ��
			if (myNum1 == comNum1) {

				//�Է�1,2 ��Ʈ����ũ���
				if (myNum2 == comNum2) {
					if (myNum3 != comNum3) {

						cout << "2��Ʈ����ũ 1�ƿ�\n";

					}

					//3��Ʈ����ũ���
					if (myNum3 == comNum3) {
						cout << "��Ʈ����ũ\n";
						break;
					}
				}

				//�Է�1,3 ��Ʈ����ũ ���
				if (myNum3 == comNum3) {

					if (myNum2 != comNum2) {
						cout << "2��Ʈ����ũ 1�ƿ�\n";

					}
				}

				//�Է�2�� 1��
				if (myNum2 == comNum3) {

					//2��
					if (myNum3 == comNum2) {
						cout << "1��Ʈ����ũ 2��\n";
					}

					if (myNum3 != comNum1 || myNum3 != comNum2 || myNum3 != comNum3) {
						cout << "1��Ʈ����ũ 1��\n";
					}
				}

				//�Է�3�� 1��
				if (myNum3 == comNum2) {
					if (myNum2 != comNum1 || myNum2 != comNum2 || myNum2 != comNum3) {
						cout << "1��Ʈ����ũ 1��\n";
					}
				}

			}

			//�Է�2�� ��Ʈ����ũ�ϰ��
			if (myNum2 == comNum2) {

				//�Է�1�� 1��
				if (myNum1 == comNum3) {

					//2��
					if (myNum1 == comNum3) {
						cout << "1��Ʈ����ũ 2��\n";
					}

					if (myNum1 != comNum1 || myNum1 != comNum2 || myNum1 != comNum3) {
						cout << "1��Ʈ����ũ 1��\n";
					}
				}

				//�Է�3�� 1��
				if (myNum3 == comNum1) {
					if (myNum3 != comNum1 || myNum3 != comNum2 || myNum3 != comNum3) {
						cout << "1��Ʈ����ũ 1��\n";
					}
				}

				//�Է�2,3�� ��Ʈ����ũ�� ���
				if (myNum3 == comNum3) {

					if (myNum1 != comNum1) {
						cout << "2��Ʈ����ũ 1�ƿ�\n";

					}
				}


			}

			//�Է�3�� ��Ʈ����ũ�ϰ��
			if (myNum3 == comNum3) {

				//�Է�1�� 1��
				if (myNum1 == comNum2) {

					

					if (myNum1 != comNum1 || myNum1 != comNum2 || myNum1 != comNum3) {
						cout << "1��Ʈ����ũ 1��\n";
					}
				}

				//�Է�2�� 1��
				if (myNum2 == comNum1) {

					//2��
					if (myNum2 == comNum1) {
						cout << "1��Ʈ����ũ 2��\n";
					}

					if (myNum2 != comNum1 || myNum2 != comNum2 || myNum2 != comNum3) {
						cout << "1��Ʈ����ũ 1��\n";
					}
				}

			}

			//3��

			if (myNum1 == comNum2 || myNum1 == comNum3) {
				if (myNum2 == comNum1 || myNum2 == comNum3) {
					if (myNum3 == comNum1 || myNum3 == comNum2) {
						cout << "3��\n";
					}
				}
			}

			//3�ƿ�

			if (myNum1 != comNum1 || myNum1 != comNum2 || myNum1 != comNum3) {
				if (myNum2 != comNum1 || myNum2 != comNum2 || myNum2 != comNum3) {
					if (myNum3 != comNum1 || myNum3 != comNum2 || myNum3 != comNum3) {
						cout << "3�ƿ�\n";
					}
				}
			}


		}
	

	}

	return 0;

}