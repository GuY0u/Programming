#pragma once
#include "player.h"
#include "enemy.h"
#include <Windows.h>
class mainGame
{
private:
	player* _player;
	enemy* _enemy;

public:

	mainGame();

	~mainGame();

};

