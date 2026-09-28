#include <iostream> // 入出力ストリーム

using namespace std; // stdを省略して使用する！

// 型Tをテンプレートパラメータとして定義
template <typename T>
T Min(T a, T b) {
	return (a < b) ? a : b; // aとbのうち小さい方を返す
}

int main() {
	// int型
	int int_a = 10;
	int int_b = 20;
	cout << "int Min: " << Min<int>(int_a, int_b) << endl;

	// float型
	float float_a = 10.5f;
	float float_b = 20.5f;
	cout << "float Min: " << Min<float>(float_a, float_b) << endl;

	// double型
	double double_a = 10.5;
	double double_b = 20.5;
	cout << "double Min: " << Min<double>(double_a, double_b) << endl;

	return 0;
}