#include <iostream>
#include <time.h>

using namespace std;

//�������� ���ڵ��� ����ִµ�
//���ڸ� ����ȭ �����༭ �������� �����ش�.
//���߿� ĳ���� ���°��� ǥ���Ҷ� ���� ����Ѵ�.
enum GameRule {
	����=1, ����, ��
};


int main() {

	while (true) {

		srand(time(NULL));

		int rspCom = rand() % 3 + 1;

		int rspUser;

		cout << "���������� �����Դϴ�.\n ����(1��), ����(2��), ��(3��)�� ���ڸ� �������ּ��� : ";

		cin >> rspUser;


		if (rspUser < 0 || rspUser>3) {
			cout << "���� ���� ���Դϴ�.\n\n";
		}

		if (rspUser == 1) {
			cout << "������ �����ϼ̽��ϴ�.\n\n";
			if (rspCom == 1) {
				cout << "��ǻ�ͼ��� : " << rspCom << endl;
				cout << "���̽��ϴ�.\n\n";
			}
			else if (rspCom == 2) {
				cout << "��ǻ�ͼ��� : " << rspCom << endl;
				cout << "�й��ϼ̽��ϴ�.\n\n";
			}
			else if (rspCom == 3) {
				cout << "��ǻ�ͼ��� : " << rspCom << endl;
				cout << "�¸��ϼ̽��ϴ�.\n\n";
				break;
			}
		}

		if (rspUser == 2) {
			cout << "������ �����ϼ̽��ϴ�.\n\n";
			if (rspCom == 1) {
				cout << "��ǻ�ͼ��� : " << rspCom << endl;
				cout << "�¸��ϼ̽��ϴ�.\n\n";
				break;
			}
			else if (rspCom == 2) {
				cout << "��ǻ�ͼ��� : " << rspCom << endl;
				cout << "���̽��ϴ�.\n\n";
			}
			else if (rspCom == 3) {
				cout << "��ǻ�ͼ��� : " << rspCom << endl;
				cout << "�й��ϼ̽��ϴ�.\n\n";
			}
		}

		if (rspUser == 3) {
			cout << "���� �����ϼ̽��ϴ�.\n\n";
			if (rspCom == 1) {
				cout << "��ǻ�ͼ��� : " << rspCom << endl;
				cout << "�й��ϼ̽��ϴ�.\n\n";
			}
			else if (rspCom == 2) {
				cout << "��ǻ�ͼ��� : " << rspCom << endl;
				cout << "�¸��ϼ̽��ϴ�.\n\n";
				break;
			}
			else if (rspCom == 3) {
				cout << "��ǻ�ͼ��� : " << rspCom << endl;
				cout << "���̽��ϴ�.\n\n";
			}
		}

	}

	return 0;

}