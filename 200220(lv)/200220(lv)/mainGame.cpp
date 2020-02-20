#include "mainGame.h"

mainGame::mainGame()
{

	//���� ����
	_player = new player;
	//���� ����
	_player->setHp(200);
	_player->setLv(1);
	_player->setAtt(50);
	_player->setDef(20);
	_player->setExp(0);
	_player->setSpeed(5.0f);
	//�÷��̾�����
	_player->showData();


	//������
	_enemy = new enemy;
	//������
	_enemy->setHp(50);
	_enemy->setLv(1);
	_enemy->setAtt(5);
	_enemy->setDef(10);
	_enemy->setExp(100);
	_enemy->setSpeed(1.0f);
	//������
	_enemy->showData();

	while (true)
	{
		//set�� ���� �����Ҷ� get�� ���� ����Ҷ�
		cout << "Player attack!\n";
		_enemy->setHp(_enemy->getHp() - _player->getAtt());
		Sleep(1000);
		cout << "\n\n\n";

		cout << "Enemy attack!\n";
		_player->setHp(_player->getHp() - _enemy->getAtt());
		Sleep(1000);
		cout << "\n\n\n";

		if (_enemy->getHp() <= 0)
		{
			cout << "Enemy Down!\n";
			_player->setExp(_player->getExp() + _enemy->getExp());

			if (_player->getExp() >= 100)
			{
				_player->setLv(_player->getLv() + 1);
				_player->setExp(0);
				cout << "Lv up!\n";
				cout << "Player Lv: " << _player->getLv();
				cout << "\n\n\n";
				break;
			}
			
		}
		else if (_player->getHp() <= 0)
		{
			cout << "Player Down!\n";
			Sleep(1000);

			cout << "Game Over...\n";
		}

		




	}

}

mainGame::~mainGame()
{
	delete _player;
	delete _enemy;
}
