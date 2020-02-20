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
	int _exp;
	float _speed;

public:

	int getLv() { return _lv; }
	void setLv(int lv) { _lv = lv; }

	int getHp() { return _hp; }
	void setHp(int hp) { _hp = hp; }

	int getAtt() { return _att; }
	void setAtt(int att) { _att = att; }

	int getDef() { return _def; }
	void setDef(int def) { _def = def; }

	float getSpeed() { return _speed; }
	void setSpeed(float speed) { _speed = speed; }

	int getExp() { return _exp; }
	void setExp(int exp) { _exp = exp; }

	void showData();

	enemy();
	~enemy();


};

