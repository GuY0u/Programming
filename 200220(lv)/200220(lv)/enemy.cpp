#include "enemy.h"

enemy::enemy()
{
}

enemy::~enemy()
{
}

void enemy::showData()
{
	cout << "<< Enemy >>" << endl;
	cout << "Hp: " << _hp << endl;
	cout << "Lv: " << _lv << endl;
	cout << "Att: " << _att << endl;
	cout << "Def: " << _def << endl;
	cout << "Speed: " << _speed << endl;
}
