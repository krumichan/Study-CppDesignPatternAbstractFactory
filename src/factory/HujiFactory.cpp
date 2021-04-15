#include "HujiFactory.h"
#include "../door/HujiDoor.h"
#include "../motor/HujiMotor.h"
#include <iostream>

/**
 * 扉を生成する関数
 * @return 生成済みの扉
 */
unique_ptr<Door> HujiFactory::CreateDoor()
{
	cout << "富士工場から富士扉を生成します。" << endl;
	unique_ptr<Door> pDoor = make_unique<HujiDoor>();
	return move(pDoor);
}

/**
 * モーターを生成する関数
 * @return モーター
 */
unique_ptr<Motor> HujiFactory::CreateMotor()
{
	cout << "富士工場から富士モーターを生成します。" << endl;
	unique_ptr<Motor> pMotor = make_unique<HujiMotor>();
	return move(pMotor);
}
