#include "enemy.h"

enemy::enemy()
{
}

enemy::~enemy()
{
}

//showData�θ��� �����ִ� ����
void enemy::showData()
{
	cout << "<< enemy >>" << endl;
	cout << "Hp: " << _hp << endl;
	cout << "Lv: " << _lv << endl;
	cout << "Att: " << _att << endl;
	cout << "Def: " << _def << endl;
}
