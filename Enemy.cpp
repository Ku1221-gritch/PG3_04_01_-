#include "Enemy.h"
#include<stdio.h>

//static�Ő錾���������o�֐��|�C���^�e�[�u���̎���
void (Enemy::* Enemy::EnemyTable[])() = {
	&Enemy::approach,//�ڋ߁A�v�f�ԍ�0
	&Enemy::shooting,//�ˌ��A�v�f�ԍ�1
	&Enemy::withdrawal//���E�A�v�f�ԍ�2
};

void Enemy::approach()
{
	printf("�ڋ�\n");
}

void Enemy::shooting()
{
	printf("�ˌ�\n");
}

void Enemy::withdrawal()
{
	printf("���E\n");
}

void Enemy::Update() {

	for (int i = 0; i < 3; i++) {
		//���݃t�F�[�Y�̊֐������s
		(this->*EnemyTable[i])();
	}
}