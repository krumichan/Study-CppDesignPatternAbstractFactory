#pragma once

#include "../template/AbstractDoor.h"

class MitsubishiDoor : public Door
{
public:
	/**
	 * 扉が開く際の動作
	 */
	void DoOpen() override;

	/**
	 * 扉が閉める際の動作
	 */
	void DoClose() override;
};
