#include <iostream> // 入出力ストリーム

using namespace std; // stdを省略して使用する！

// 再帰的な賃金体制
int GetHourlyWage(int n) {
	if (n <= 1) {
		return 100; // 1時間あたりの賃金は100円
	}
	// 前の１時間でもらった時給*2-50円
	return (GetHourlyWage(n - 1) * 2 - 50);
}

int main() {

	system("chcp 65001> nul");

	int normal_hourly_wage = 1226; // 一般的な時給
	int recursive_total = 0;      // 再帰的な賃金の合計
	int normal_total = 0;          // 一般的な賃金の合計

	cout << "------------------------------------------" << endl;
	cout << "1時間あたりの賃金: " << normal_hourly_wage << "円" << endl;
	cout << "------------------------------------------" << endl;

	// 比較 hourは１時間から10時間まで
	for (int hour = 1; hour <= 10; ++hour) {
		// 一般的な賃金計算
		normal_total = normal_hourly_wage * hour;

		// 再帰的な賃金計算
		recursive_total += GetHourlyWage(hour);

		// 結果を出力
		cout << hour << "時間働いた場合 -> " << "一般: " << normal_total << "円 | " << "再帰: " << recursive_total << "円";
		if (recursive_total > normal_total) {
			cout << " 再帰の勝ち";
		}
		cout << endl;
	}

	return 0;
}