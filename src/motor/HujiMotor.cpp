#include "HujiMotor.h"
#include <iostream>

/**
 * 扉をセットする
 * @param 扉
 */
void HujiMotor::SetDoor(Door& _door)
{
	this->door.reset(&_door);
}

/**
 * 移動する
 * @param 移動値
 */
void HujiMotor::Move(int _distance)
{
	using namespace std;

	if (_distance < 0)
	{
		this->door->Close();
		cout << "move down : " << -_distance << endl;
		this->door->Open();
	}
	else
	{
		this->door->Close();
		cout << "move up : " << _distance << endl;
		this->door->Open();
	}
}
