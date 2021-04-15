#pragma once

#include "AbstractDoor.h"
#include <string>
#include <memory>

using namespace std;

/**
 * エレベーターのモーターの基底クラス
 */
class Motor
{
protected:
	/**
	 * 操作する扉
	 */
	unique_ptr<Door> door;

protected:
	/**
	 * コンストラクタ
	 */
	Motor();

public:
	/**
	 * デストラクタ
	 */
	virtual ~Motor();

public:
	/**
	 * 扉をセットする
	 * @param 扉
	 */
	virtual void SetDoor(Door&) = 0;

	/**
	 * 移動する
	 * @param 移動値
	 */
	virtual void Move(int) = 0;
};
