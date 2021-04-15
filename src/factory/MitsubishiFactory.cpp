#include "MitsubishiFactory.h"
#include "../door/MitsubishiDoor.h"
#include "../motor/MitsubishiMotor.h"
#include <iostream>

/**
 * 扉を生成する関数
 * @return 生成済みの扉
 */
unique_ptr<Door> MitsubishiFactory::CreateDoor()
{
	cout << "三菱工場から三菱扉を生成します。" << endl;
	unique_ptr<Door> pDoor = make_unique<MitsubishiDoor>();
	return move(pDoor);
}

/**
 * モーターを生成する関数
 * @return モーター
 */
unique_ptr<Motor> MitsubishiFactory::CreateMotor()
{
	cout << "三菱工場から三菱モーターを生成します。" << endl;
	unique_ptr<Motor> pMotor = make_unique<MitsubishiMotor>();
	return move(pMotor);
}
