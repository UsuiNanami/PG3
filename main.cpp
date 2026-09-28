#include <iostream> // 入出力ストリーム
#include <windows.h>
#include "Enemy.h"

using namespace std; // stdを省略して使用する！

int main() {
	system("chcp 65001> nul");

	Enemy enemy;
	// 接近 -> 射撃 -> 離脱 を順番に呼び出す
	for (int i = 0; i < 3; ++i) {
		enemy.Update();
	}

	return 0;
}