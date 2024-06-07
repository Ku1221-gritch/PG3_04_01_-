#pragma once

class Enemy {
public:
	//自作メンバ関数
	void approach();
	void shooting();
	void withdrawal();
	void Update();

private:
	//メンバ関数ポインタのテーブル
	static void (Enemy::* EnemyTable[])();
};
