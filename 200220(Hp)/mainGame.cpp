#include "mainGame.h"
#include <time.h>
#include <Windows.h>

mainGame::mainGame()
{

	//플레이어 클래스 생성
	_player = new player;
	srand(time(NULL));
	//플레이어 클래스 값 초기화
	_player->setHp(100);
	_player->setLv(10);
	_player->setAtt(20);
	_player->setDef(10);
	_player->showData();

	//적 클래스 생성
	_enemy = new enemy;
	_enemy->setHp(500);
	_enemy->setLv(50);
	_enemy->setAtt(60);
	_enemy->setDef(40);
	_enemy->showData();

	while (true)
	{


		//유저공격
		cout << "Player attack\n";
		_enemy->setHp(_enemy->getHp() - _player->getAtt()); //적체력 - 유저공격력
		cout << "Player Hp: " << _player->getHp(); //체력 확인
		cout << "Enemy Hp: " << _enemy->getHp(); //체력 확인
		cout << "\n\n\n";
		Sleep(1000);//출력텀

		//적사망
		if (_enemy->getHp() <= 0)
		{
			cout << "Win!";
			cout << "\n\n\n";
			Sleep(1000);//출력텀
			break;
		}

		//적공격
		cout << "Enemy attack\n";
		_player->setHp(_player->getHp() - _enemy->getAtt()); //유저체력 - 적공격력
		cout << "Player Hp: " << _player->getHp(); //체력 확인
		cout << "Enemy Hp: " << _enemy->getHp(); //체력 확인
		cout << "\n\n\n";
		Sleep(1000);//출력텀

		//유저사망
		if (_player->getHp() <= 0)
		{
			cout << "Game Over....";
			cout << "\n\n\n";
			Sleep(1000);//출력텀
			break;
		}

		//체력적을시 힐사용
		if (_player->getHp() <= 50)
		{
			_player->setHeal(rand() % 500);
			cout << "Warning Use Heal!\n";
			_player->setHp(_player->getHp() + _player->getHeal());
			cout << _player->getHeal() << "Heal Hp!";
			cout << "\n\n\n";
			Sleep(1000);//출력텀
		}

	}
}

mainGame::~mainGame()
{
}
