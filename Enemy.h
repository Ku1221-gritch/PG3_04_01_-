#pragma once

class Enemy {
public:
	//���상���o�֐�
	void approach();
	void shooting();
	void withdrawal();
	void Update();

private:
	//�����o�֐��|�C���^�̃e�[�u��
	static void (Enemy::* EnemyTable[])();
};
