#include "Enemy.h"
#include<stdio.h>

//staticで宣言したメンバ関数ポインタテーブルの実体
void (Enemy::* Enemy::EnemyTable[])() = {
	&Enemy::approach,//接近、要素番号0
	&Enemy::shooting,//射撃、要素番号1
	&Enemy::withdrawal//離脱、要素番号2
};

void Enemy::approach()
{
	printf("接近\n");
}

void Enemy::shooting()
{
	printf("射撃\n");
}

void Enemy::withdrawal()
{
	printf("離脱\n");
}

void Enemy::Update() {

	for (int i = 0; i < 3; i++) {
		//現在フェーズの関数を実行
		(this->*EnemyTable[i])();
	}
}