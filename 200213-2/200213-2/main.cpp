#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

int main() {

	//���ٿ���� ��
	//1.�Է¹޾ƾ� �Ѵ�.
	//2.ã�ƾ� �ϴ� ����
	//3.��
	//-�������� ���Ұ��ΰ�
	//-���� �Է��� ���ڿ� �������ڰ� ����������

	//rand() -> �����Լ� -> �Լ��̸�() �̿� ���� ����
	//rand() -> �����߻�

	srand(time(NULL)); //�������� ��� ���½�����

	int count = 0; //�õ�ȸ�� ����

	int randomNum = rand() % 100; //�������� %100�� ���־� 0~99�� �߿� �ϳ��� ����
	//cout << "���� : " << randomnum << endl;





	while (true) //true ���ѹݺ� ����
	{
		//count++;

		int answer;
		cout << "0~99������ ���ڸ� �Է��ϼ��� : ";
		cin >> answer;

		if (answer > 100 || answer < 0) {
			cout << "�Է��ϽŰ��� ���� �ʽ��ϴ�.\n\n";
		}
		else if (answer > randomNum) {
			cout << "�Է°��� �� Ů�ϴ�.\n\n";
			count++;
		}
		else if (answer < randomNum) {
			cout << "�������� �� Ů�ϴ�.\n\n";
			count++;
		}
		else if (answer == randomNum) {
			cout << "�����Դϴ�.\n\n";
			cout << "�õ�Ƚ�� : " << count << "\n\n";
			break;
		}

	}


	return 0;
}


//RPG
//1. ĳ����
//  -����, ��ų, �����, Ŭ����
//2. ĳ���͸� ����ٴϴ� ī�޶�
//3. ���
//4. ��ų����
//5. ����(3��)
//6. ����
//7. UI
//8. ����

//while ���ѹݺ��� ���� �ְ������ '#include <Windows.h>'�� �������ְ� Sleep�� ����Ѵ�.