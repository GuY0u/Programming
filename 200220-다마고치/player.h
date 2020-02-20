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

	//데이터를 보여주는 함수
	void showStat();

	//놀아주기 함수
	void play();

	//밥주기 함수
	void feed();

	//청소 함수
	void sweep();

	//레벨 업
	void lvlup();

	player();
	~player();


};

