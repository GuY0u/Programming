#include "mainGame.h"
#include <time.h>
#include <Windows.h>

mainGame::mainGame()
{

	//�÷��̾� Ŭ���� ����
	_player = new player;
	srand(time(NULL));
	//�÷��̾� Ŭ���� �� �ʱ�ȭ
	_player->setHp(100);
	_player->setLv(10);
	_player->setAtt(20);
	_player->setDef(10);
	_player->showData();

	//�� Ŭ���� ����
	_enemy = new enemy;
	_enemy->setHp(500);
	_enemy->setLv(50);
	_enemy->setAtt(60);
	_enemy->setDef(40);
	_enemy->showData();

	while (true)
	{


		//��������
		cout << "Player attack\n";
		_enemy->setHp(_enemy->getHp() - _player->getAtt()); //��ü�� - �������ݷ�
		cout << "Player Hp: " << _player->getHp(); //ü�� Ȯ��
		cout << "Enemy Hp: " << _enemy->getHp(); //ü�� Ȯ��
		cout << "\n\n\n";
		Sleep(1000);//�����

		//�����
		if (_enemy->getHp() <= 0)
		{
			cout << "Win!";
			cout << "\n\n\n";
			Sleep(1000);//�����
			break;
		}

		//������
		cout << "Enemy attack\n";
		_player->setHp(_player->getHp() - _enemy->getAtt()); //����ü�� - �����ݷ�
		cout << "Player Hp: " << _player->getHp(); //ü�� Ȯ��
		cout << "Enemy Hp: " << _enemy->getHp(); //ü�� Ȯ��
		cout << "\n\n\n";
		Sleep(1000);//�����

		//�������
		if (_player->getHp() <= 0)
		{
			cout << "Game Over....";
			cout << "\n\n\n";
			Sleep(1000);//�����
			break;
		}

		//ü�������� �����
		if (_player->getHp() <= 50)
		{
			_player->setHeal(rand() % 500);
			cout << "Warning Use Heal!\n";
			_player->setHp(_player->getHp() + _player->getHeal());
			cout << _player->getHeal() << "Heal Hp!";
			cout << "\n\n\n";
			Sleep(1000);//�����
		}

	}
}

mainGame::~mainGame()
{
}
