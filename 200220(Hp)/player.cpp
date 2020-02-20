#include "player.h"


//생성자
player::player()
{
}
//소멸자
player::~player()
{
}


//showData부를시 보여주는 정보
void player::showData()
{



	cout << "<< Player >>" << endl;
	cout << "Hp: " << _hp << endl;
	cout << "Lv: " << _lv << endl;
	cout << "Att: " << _att << endl;
	cout << "Def: " << _def << endl;

}