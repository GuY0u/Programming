#include "player.h"


player::player()
{

}

player::~player()
{

}

void player::showData()
{
	cout << "<< Player >>" << endl;
	cout << "Hp: " << _hp << endl;
	cout << "Lv: " << _lv << endl;
	cout << "Att: " << _att << endl;
	cout << "Def: " << _def << endl;
	cout << "Speed: " << _speed << endl;
	cout << "Exp: " << _exp << endl;
}