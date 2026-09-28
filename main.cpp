#include <cstring>   // strcmp関数の使用を可能にするインクルード
#include <iostream>  // cout関数の使用を可能にするインクルード
#include <cstdio>    // printf関数の使用を可能にするインクルード
#include <cstdlib>   // system関数の使用を可能にするインクルード
#include <vector>    // vectorの使用を可能にすインクルード
#include <list>      // listの使用を可能にするインクルード

using namespace std; // stdを省略して使用する！

int main() {
	
	system("chcp 65001> nul");

	list<const char*> yamanote = {
	"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori",
	"Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Shin-Okubo",
	"Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki",
	"Shinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	// 1970年
	cout << "======== 1970年 ========\n";
	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		cout << *itr << "\n";
	}

	// 2019年
	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		if (strcmp(*itr, "Tabata") == 0) {
			itr = yamanote.insert(itr, "Nishi-Nippori"); // 田端の前に西日暮里を挿入
			break;
		}
	}

	cout << "======== 2019年 ========\n";
	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		cout << *itr << "\n";
	}

	// 2022年
	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		if (strcmp(*itr, "Tamachi") == 0) {
			itr = yamanote.insert(itr, "Takanawa Gateway"); // 田町の前に高輪ゲートウェイを挿入
			break;
		}
	}

	cout << "======== 2022年 ========\n";
	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		cout << *itr << "\n";
	}

	return 0;
}