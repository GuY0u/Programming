#include "enemy.h"

enemy::enemy()
{
}

enemy::~enemy()
{
}

//showData부를시 보여주는 정보
void enemy::showData()
{
	cout << "<< enemy >>" << endl;
	cout << "Hp: " << _hp << endl;
	cout << "Lv: " << _lv << endl;
	cout << "Att: " << _att << endl;
	cout << "Def: " << _def << endl;
}
