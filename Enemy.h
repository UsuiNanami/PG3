#pragma once

// 敵の状態を定義
enum class Phase {
	Approach, // 0: 接近
	Shoot,    // 1: 射撃
	Leave,    // 2: 離脱
	Count,
};

class Enemy {
public:

	Enemy();
	~Enemy();

	// 更新
	void Update();

private:
	// 各フェーズの処理関数
	void Approach();
	void Shoot();
	void Leave();

	// 現在フェーズ
	Phase phase_ = Phase::Approach;

	// メンバ関数
	static void (Enemy::* spFuncTable[])();

};

