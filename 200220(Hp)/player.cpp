#include "player.h"


//������
player::player()
{
}
//�Ҹ���
player::~player()
{
}


//showData�θ��� �����ִ� ����
void player::showData()
{



	cout << "<< Player >>" << endl;
	cout << "Hp: " << _hp << endl;
	cout << "Lv: " << _lv << endl;
	cout << "Att: " << _att << endl;
	cout << "Def: " << _def << endl;

}