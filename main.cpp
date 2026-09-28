#include <iostream>
#include <cstdio>
#include <cstdlib>

int main() {
	// コンソールを UTF-8 に設定する
	system("chcp 65001 > nul");

	char str[] = "PG3 00 確認課題：UTF-8での表示テスト";
	printf("%s\n", str);
	return 0;
}