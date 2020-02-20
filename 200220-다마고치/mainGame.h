#pragma once
#include "player.h" //플레이어 클래스를 사용하기 위해
class mainGame
{

private:
	player* _player; //플레이어 클래스 선언

public:
	mainGame(); //생성자
	~mainGame(); //소멸자
};

