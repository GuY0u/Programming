#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class player
{
private:
	int _lv;
	int _hp;
	int _att;
	int _def;
	int _heal;
	float _speed;

public :
	int getLv() { return _lv; }
	void setLv(int lv) { _lv = lv; }

	int getHp() { return _hp; }
	void setHp(int hp) { _hp = hp; }

	int getAtt() { return _att; }
	void setAtt(int att) { _att = att; }

	int getDef() { return _def; }
	void setDef(int def) { _def = def; }

	int getHeal() { return _heal; }
	void setHeal(int heal) { _heal = heal; }

	float getSpeed() { return _speed; }
	void setSpeed(float speed) { _speed = speed; }

	void showData();

	player();
	~player();


};

