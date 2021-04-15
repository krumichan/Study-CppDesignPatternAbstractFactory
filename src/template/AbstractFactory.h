#pragma once

#include "AbstractDoor.h"
#include "AbstractMotor.h"
#include <memory>

/**
 * ファクトリーの基底クラス
 */
class Factory
{
public:
	/**
	 * デストラクタ
	 */
	virtual ~Factory();

public:
	/**
	 * 扉を生成する関数
	 * @return 生成済みの扉
	 */
	virtual unique_ptr<Door> CreateDoor() = 0;

	/**
	 * モーターを生成する関数
	 * @return モーター
	 */
	virtual unique_ptr<Motor> CreateMotor() = 0;
};
