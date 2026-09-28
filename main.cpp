#include <iostream> // 入出力ストリーム
#include <windows.h>

using namespace std; // stdを省略して使用する！

// 基底クラス 動物
class Animal {
public:
	// コンストラクタ
	Animal(){}
	// デストラクタ
	virtual ~Animal(){}
	// 攻撃
	virtual void Sound() {} // 頭にvirtualをつけると派生クラスでオーバーライドできる
};

// 派生クラス　猫
class cat : public Animal {
public:
	void Sound() { cout << "猫 : にゃー" << endl; }
};

// 派生クラス　犬
class dog : public Animal {
public:
	void Sound() { cout << "犬 : わんわん" << endl; }
};

// 派生クラス　野々村議員
class Nonomura : public Animal {
public:
	void Sound() { cout << "野々村議員 : ウワッハッハーーン" << endl; }
};

int main() {
	system("chcp 65001> nul");
	//cat* cat[3];
	//dog* dog;
	Animal* animals[3]; // まとめられるようになった
	animals[0] = new cat();
	animals[1] = new dog();
	animals[2] = new Nonomura();

	for (int i = 0; i < 3; i++) {
		animals[i]->Sound();
	}

	// 破棄
	for (int i = 0; i < 3; i++) {
		delete animals[i];
	}
	return 0;
}