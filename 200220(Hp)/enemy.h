#pragma once
#include <iostream>
using namespace std;
class enemy
{

private:
	int _lv;
	int _hp;
	int _att;
	int _def;

public:
	int getLv() { return _lv; }
	void setLv(int lv) { _lv = lv; }

	int getHp() { return _hp; }
	void setHp(int hp) { _hp = hp; }

	int getAtt() { return _att; }
	void setAtt(int att) { _att = att; }

	int getDef() { return _def; }
	void setDef(int def) { _def = def; }


	void showData();

	enemy();
	~enemy();
};

