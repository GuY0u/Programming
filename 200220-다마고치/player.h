#pragma once
#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

class player
{
private:
	int _lv;
	int _clean;
	int _stress;
	int _hunger;
	int _exp;

public:
	int getLv() { return _lv; }
	void setLv(int lv) { _lv = lv; }

	int getClean() { return _clean; }
	void setClean(int clean) { _clean = clean; }

	int getStress() { return _stress; }
	void setStress(int stress) { _stress = stress; }

	int getHumger() { return _hunger; }
	void setHunger(int hunger) { _hunger = hunger; }

	int getExp() { return _exp; }
	void setExp(int exp) { _exp = exp; }

	//�����͸� �����ִ� �Լ�
	void showStat();

	//����ֱ� �Լ�
	void play();

	//���ֱ� �Լ�
	void feed();

	//û�� �Լ�
	void sweep();

	//���� ��
	void lvlup();

	player();
	~player();


};

