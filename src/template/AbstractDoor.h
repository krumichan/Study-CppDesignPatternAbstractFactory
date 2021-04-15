#pragma once

#include <string>

using namespace std;

/**
 * エレベーターの扉の親クラス
 */
class Door
{
private:
	/**
	 * 開いているかどうか
	 */
	string status;

protected:
	/**
	 * コンストラクタ
	 */
	Door();

public:
	/**
	 * デストラクタ
	 */
	virtual ~Door();

public:
	/**
	 * 扉が開く
	 */
	void Open();

	/**
	 * 扉が閉める
	 */
	void Close();

protected:
	/**
	 * 扉が開く際の動作
	 */
	virtual void DoOpen() = 0;

	/**
	 * 扉が閉める際の動作
	 */
	virtual void DoClose() = 0;
};
