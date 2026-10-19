#include <iostream> // 入出力ストリーム
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std; // stdを省略して使用する！

// 判定関数 (コールバック関数) 
void ShowResult(int roll, int guess) {
	printf("出目: %d\n", roll);

	// 奇数1 偶数0
	int isOdd = roll % 2;
	if (guess == isOdd) {
		printf("正解\n");
	}
	else {
		printf("不正解\n");
	}
}

// 遅延実行関数
void DelayReveal(void (*fn)(int, int), unsigned int delayMs, int roll, int userGuess) {
	Sleep(delayMs); // ミリ秒単位で遅延
	// コールバック関数を呼び出す
	fn(roll, userGuess);
}

int main() {
	system("chcp 65001> nul");
	// 乱数の初期化
	srand((unsigned int)time(NULL));

	// ユーザーの入力を取得
	int userGuess = 0;
	printf("半(奇数)なら１，丁(偶数)なら０を記入: ");
	scanf_s("%d", &userGuess);

	// サイコロを振る
	int roll = rand() % 6 + 1; // 1から6までの乱数

	printf("サイコロを振っています...\n");

	// 遅延実行関数を呼び出す
	DelayReveal(ShowResult, 3000, roll, userGuess); // 3秒遅延して結果を表示


	return 0;
}