#pragma once

#include "../template/AbstractFactory.h"

class MitsubishiFactory : public Factory
{
public:
	/**
	 * 扉を生成する関数
	 * @return 生成済みの扉
	 */
	unique_ptr<Door> CreateDoor() override;

	/**
	 * モーターを生成する関数
	 * @return モーター
	 */
	unique_ptr<Motor> CreateMotor() override;
};
