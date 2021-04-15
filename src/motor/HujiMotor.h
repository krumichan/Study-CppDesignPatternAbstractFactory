#pragma once

#include "../template/AbstractMotor.h"

class HujiMotor : public Motor
{
public:
	/**
	 * 扉をセットする
	 * @param 扉
	 */
	void SetDoor(Door&) override;

	/**
	 * 移動する
	 * @param 移動値
	 */
	void Move(int) override;
};
