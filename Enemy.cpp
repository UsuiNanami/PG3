#include "Enemy.h"
#include <iostream>

using namespace std;

// メンバ関数ポインタテーブル
void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach, // 0: 接近
	&Enemy::Shoot,    // 1: 射撃
	&Enemy::Leave     // 2: 離脱
};

Enemy::Enemy() {}

Enemy::~Enemy() {}

void Enemy::Update() { // switchをなくす
	size_t index = static_cast<size_t>(phase_);

	if (index < static_cast<size_t>(Phase::Count)) {
		(this->*spFuncTable[index])();
	}
}

// 接近処理
void Enemy::Approach() {
	cout << "接近" << endl;
	phase_ = Phase::Shoot; // 次のフェーズへ遷移
}

// 射撃処理
void Enemy::Shoot() {
	cout << "射撃" << endl;
	phase_ = Phase::Leave; // 次のフェーズへ遷移
}

// 離脱処理
void Enemy::Leave() {
	cout << "離脱" << endl;
}