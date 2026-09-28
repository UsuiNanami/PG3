#include <iostream> // 入出力ストリーム

using namespace std; // stdを省略して使用する！

// 基底クラス
class IShape { // インターフェースであることを示すために先頭にIを付ける
public:
	// デストラクタ
	virtual ~IShape() {}
	// 攻撃
	virtual void Size() = 0; // 純粋仮想関数 (=0をつける)
	virtual void Draw() = 0;
};

// 派生クラス
class Circle : public IShape { // 円クラス
private:
	double radius; // 半径
	double area;   // 面積

public:
	Circle(double r) : radius(r), area(0.0) {}

	// 面積を計算する
	void Size() override {
		area = 3.14 * radius * radius; // 面積を計算
	}

	// 値	
	void Draw() override {
		cout << "円の半径: " << radius << endl;
		cout << "円の面積: " << area << endl;
	}

};

// 派生クラス
class Rectangle : public IShape { // 矩形クラス
private:
	double width;  // 幅
	double height; // 高さ
	double area;   // 面積

public:
	Rectangle(double w, double h) : width(w), height(h), area(0.0) {}
	// 面積を計算する
	void Size() override {
		area = width * height; // 面積を計算
	}

	// 値
	void Draw() override {
		cout << "矩形の幅: " << width << endl;
		cout << "矩形の高さ: " << height << endl;
		cout << "矩形の面積: " << area << endl;
	}

};

int main() {
	system("chcp 65001> nul");

	IShape* shapes[2];

	shapes[0] = new Circle(5.0);
	shapes[1] = new Rectangle(4.0, 6.0);

	for (int i = 0; i < 2; i++) {
		shapes[i]->Size();
		shapes[i]->Draw();
	}

	for (int i = 0; i < 2; i++) {
		delete shapes[i];
	}

	return 0;
}