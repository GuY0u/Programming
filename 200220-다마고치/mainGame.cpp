#include "mainGame.h"

mainGame::mainGame()
{

	//플레이어 클래스 생성
	_player = new player;
	_player->setLv(0);
	_player->setHunger(0);
	_player->setStress(0);
	_player->setClean(100);
	_player->setExp(0);
	_player->showStat();

	
	//게임 시작시 돌아가는 순환부분
	while (true)
	{

		//레벨0인 알일때 하는 행동
		if (_player->getLv() == 0)
		{
			//빠져나가지 못하게 순환
			while (true)
			{
				//반복문을 돌면서 주기적으로 스텟을 체크
				_player->egg();
				_player->showStat();
				cout << "상태: 알\n\n\n";
				//0일때는 아무것도 안해도 경험치가 오름
				_player->setExp(_player->getExp() + 50);
				Sleep(1000);
				//경험치가 100이 되었을때
				if (_player->getExp() > 100)
				{
					cout << "알이 부화!\n\n\n";
					_player->setLv(_player->getLv() + 1);
					_player->setExp(0);
					Sleep(1000);
					break;
				}
			}

		}

		//레벨 1~5인 성장기때 하는 행동
		if (_player->getLv() > 0 && _player->getLv() <= 5)
		{
			//값을 재설정
			_player->setHunger(80);
			_player->setStress(80);
			_player->setClean(0);
			_player->setExp(0);
			//빠져나가지 못하게 순환
			while (true)
			{
				int select;
				
				//상태보여주기
				_player->showStat();
				cout << "상태: 성장기\n\n\n";

				cout << "할 행동을 선택하세요\n\n";
				cout << "1. 놀아주기\n2. 밥주기\n3. 청소하기\n";
				cin >> select;
				//놀아주기
				if (select == 1) 
				{
					_player->play();
				}
				//밥주기
				else if (select == 2)
				{
					_player->feed();
				}
				//청소하기
				else if (select == 3)
				{
					_player->sweep();
				}

				//경험치가 100이 되었을때
				if (_player->getExp() > 100)
				{
					cout << "레벨 업!\n\n\n";
					_player->setLv(_player->getLv() + 1);
					_player->setExp(0);
					Sleep(1000);
					break;
				}


			}
		}

		//레벨 6이상 성숙기 하는 행동
		if (_player->getLv() > 5 && _player->getLv() <= 5)
		{
			//값을 재설정
			_player->setHunger(80);
			_player->setStress(80);
			_player->setClean(0);
			_player->setExp(0);
			//빠져나가지 못하게 순환
			while (true)
			{
				int select;

				//상태보여주기
				_player->showStat();
				cout << "상태: 성숙기\n\n\n";

				cout << "할 행동을 선택하세요\n\n";
				cout << "1. 놀아주기\n2. 밥주기\n3. 청소하기\n";
				cin >> select;
				//놀아주기
				if (select == 1)
				{
					_player->play();
				}
				//밥주기
				else if (select == 2)
				{
					_player->feed();
				}
				//청소하기
				else if (select == 3)
				{
					_player->sweep();
				}

				//경험치가 100이 되었을때
				if (_player->getExp() > 100)
				{
					cout << "레벨 업!\n\n\n";
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
