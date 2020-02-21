#include "mainGame.h"

mainGame::mainGame()
{

	//�÷��̾� Ŭ���� ����
	_player = new player;
	_player->setLv(0);
	_player->setHunger(0);
	_player->setStress(0);
	_player->setClean(100);
	_player->setExp(0);
	_player->showStat();

	
	//���� ���۽� ���ư��� ��ȯ�κ�
	while (true)
	{

		//����0�� ���϶� �ϴ� �ൿ
		if (_player->getLv() == 0)
		{
			//���������� ���ϰ� ��ȯ
			while (true)
			{
				//�ݺ����� ���鼭 �ֱ������� ������ üũ
				_player->egg();
				_player->showStat();
				cout << "����: ��\n\n\n";
				//0�϶��� �ƹ��͵� ���ص� ����ġ�� ����
				_player->setExp(_player->getExp() + 50);
				Sleep(1000);
				//����ġ�� 100�� �Ǿ�����
				if (_player->getExp() > 100)
				{
					cout << "���� ��ȭ!\n\n\n";
					_player->setLv(_player->getLv() + 1);
					_player->setExp(0);
					Sleep(1000);
					break;
				}
			}

		}

		//���� 1~5�� ����⶧ �ϴ� �ൿ
		if (_player->getLv() > 0 && _player->getLv() <= 5)
		{
			//���� �缳��
			_player->setHunger(80);
			_player->setStress(80);
			_player->setClean(0);
			_player->setExp(0);
			//���������� ���ϰ� ��ȯ
			while (true)
			{
				int select;
				
				//���º����ֱ�
				_player->showStat();
				cout << "����: �����\n\n\n";

				cout << "�� �ൿ�� �����ϼ���\n\n";
				cout << "1. ����ֱ�\n2. ���ֱ�\n3. û���ϱ�\n";
				cin >> select;
				//����ֱ�
				if (select == 1) 
				{
					_player->play();
				}
				//���ֱ�
				else if (select == 2)
				{
					_player->feed();
				}
				//û���ϱ�
				else if (select == 3)
				{
					_player->sweep();
				}

				//����ġ�� 100�� �Ǿ�����
				if (_player->getExp() > 100)
				{
					cout << "���� ��!\n\n\n";
					_player->setLv(_player->getLv() + 1);
					_player->setExp(0);
					Sleep(1000);
					break;
				}


			}
		}

		//���� 6�̻� ������ �ϴ� �ൿ
		if (_player->getLv() > 5 && _player->getLv() <= 5)
		{
			//���� �缳��
			_player->setHunger(80);
			_player->setStress(80);
			_player->setClean(0);
			_player->setExp(0);
			//���������� ���ϰ� ��ȯ
			while (true)
			{
				int select;

				//���º����ֱ�
				_player->showStat();
				cout << "����: ������\n\n\n";

				cout << "�� �ൿ�� �����ϼ���\n\n";
				cout << "1. ����ֱ�\n2. ���ֱ�\n3. û���ϱ�\n";
				cin >> select;
				//����ֱ�
				if (select == 1)
				{
					_player->play();
				}
				//���ֱ�
				else if (select == 2)
				{
					_player->feed();
				}
				//û���ϱ�
				else if (select == 3)
				{
					_player->sweep();
				}

				//����ġ�� 100�� �Ǿ�����
				if (_player->getExp() > 100)
				{
					cout << "���� ��!\n\n\n";
					_player->setLv(_player->getLv() + 1);
					_player->setExp(0);
					Sleep(1000);
					break;
				}


			}
		}

	}

}

mainGame::~mainGame()
{
}
