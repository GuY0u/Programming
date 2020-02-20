#include "player.h"


player::player()
{
}

player::~player()
{
}

void player::showStat()
{

	cout << "****************\n";
	cout << "****************\n";
	cout << "****************\n";
	cout << "****************\n";
	cout << "****************\n";
	cout << "****************\n";
	cout << "<< 상     태 >>\n";
	cout << "청결도: " << _clean << endl;
	cout << "배고픔: " << _hunger << endl;
	cout << "스트레스: " << _stress << endl;
	cout << "경험치: " << _exp << endl;
}

void player::play()
{
	int ranNum = rand() % 10 + 10;

	if (_stress < 0) 
	{
		cout << "더이상 놀고 싶지 않은거 같습니다.\n";
	}

	cout << "재미있게 노는중 입니다.\n";
	Sleep(2000);


	cout << "놀이가 끝났습니다.\n";
	//경험치 증가
	_exp += ranNum;
	cout << "만족도: " << ranNum << endl;
	_stress -= ranNum;
	if (_stress < 0) {
		_stress = 0;
	}
}

void player::feed()
{
	int ranNum = rand() % 10 + 10;

	if (_hunger > 100)
	{
		cout << "배가 부릅니다.\n";
	}

	cout << "밥먹는 중입니다...\n";
	Sleep(2000);


	cout << "식사가 끝났습니다.\n";
	//경험치 증가
	_exp += ranNum;
	cout << "만족도: " << ranNum << endl;
	_hunger -= ranNum;
	if (_hunger < 0) {
		_hunger = 0;
	}
}

void player::sweep()
{
	int ranNum = rand() % 10 + 10;

	if (_clean > 100)
	{
		cout << "청소하기엔 너무 깨끗합니다.\n";
	}

	cout << "열심히 청소중 입니다.\n";
	Sleep(2000);


	cout << "놀이가 끝났습니다.\n";
	//경험치 증가
	_exp += ranNum;
	cout << "만족도: " << ranNum << endl;
	_clean += ranNum;
	if (_clean > 100)
	{
		_clean = 100;
	}

	


}

void player::lvlup() 
{

}

