#include "player.h"


player::player()
{
}

player::~player()
{
}

void player::showStat()
{

	cout << "****************\n";
	cout << "****************\n";
	cout << "****************\n";
	cout << "****************\n";
	cout << "****************\n";
	cout << "****************\n";
	cout << "<< ��     �� >>\n";
	cout << "û�ᵵ: " << _clean << endl;
	cout << "�����: " << _hunger << endl;
	cout << "��Ʈ����: " << _stress << endl;
	cout << "����ġ: " << _exp << endl;
}

void player::play()
{
	int ranNum = rand() % 10 + 10;

	if (_stress < 0) 
	{
		cout << "���̻� ��� ���� ������ �����ϴ�.\n";
	}

	cout << "����ְ� ����� �Դϴ�.\n";
	Sleep(2000);


	cout << "���̰� �������ϴ�.\n";
	//����ġ ����
	_exp += ranNum;
	cout << "������: " << ranNum << endl;
	_stress -= ranNum;
	if (_stress < 0) {
		_stress = 0;
	}
}

void player::feed()
{
	int ranNum = rand() % 10 + 10;

	if (_hunger > 100)
	{
		cout << "�谡 �θ��ϴ�.\n";
	}

	cout << "��Դ� ���Դϴ�...\n";
	Sleep(2000);


	cout << "�Ļ簡 �������ϴ�.\n";
	//����ġ ����
	_exp += ranNum;
	cout << "������: " << ranNum << endl;
	_hunger -= ranNum;
	if (_hunger < 0) {
		_hunger = 0;
	}
}

void player::sweep()
{
	int ranNum = rand() % 10 + 10;

	if (_clean > 100)
	{
		cout << "û���ϱ⿣ �ʹ� �����մϴ�.\n";
	}

	cout << "������ û���� �Դϴ�.\n";
	Sleep(2000);


	cout << "���̰� �������ϴ�.\n";
	//����ġ ����
	_exp += ranNum;
	cout << "������: " << ranNum << endl;
	_clean += ranNum;
	if (_clean > 100)
	{
		_clean = 100;
	}

	


}

void player::lvlup() 
{

}

