#include "AbstractDoor.h"

/**
 * コンストラクタ
 */
Door::Door()
{
	//　扉の初期状態は閉じている。
	this->status = "close";
}

/**
 * デストラクタ
 */
Door::~Door()
{

}

/**
 * 扉が開く
 */
void Door::Open()
{
	//　既に開いていると無視。
	if (this->status.compare("open") == 0)
	{
		return;
	}

	//　開く動作を修行
	this->DoOpen();

	//　扉の状態を開きにセット
	this->status = "open";
}

/**
 * 扉が閉める
 */
void Door::Close()
{
	//　既に閉めていると無視。
	if (this->status.compare("close") == 0)
	{
		return;
	}

	//　閉める動作を修行
	this->DoClose();

	//　扉の状態を閉めにセット
	this->status = "close";
}
