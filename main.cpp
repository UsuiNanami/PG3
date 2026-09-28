#include <iostream> // 入出力ストリーム
#include <windows.h>

using namespace std; // stdを省略して使用する！

template <typename T1, typename T2> // 型を指定して使用するテンプレート関数

class NumberComparer {
private:
	T1 val1;
	T2 val2;
public:
	NumberComparer(T1 v1, T2 v2) : val1(v1), val2(v2) {}

	auto Min() {
		// 2つの値のうち小さい方を返す
		return (val1 < val2) ? val1 : val2;
	}

};

int main() {
	system("chcp 65001> nul");
	// int型, float型, double型同士の組み合わせ
	NumberComparer<int, int>       obj1(10, 1);
	NumberComparer<float, float>   obj2(3.14f, 10.5f);
	NumberComparer<double, double> obj3(1.23, 4.44);

	// それぞれ異なる型の組み合わせ
	NumberComparer<int, float>     obj4(10, 3.14f);
	NumberComparer<float, double>  obj5(3.14f, 4.44);
	NumberComparer<double, int>    obj6(1.23, 1);

	// それぞれの最小値を表示
	cout << "obj1.Min() = " << obj1.Min() << endl;
	cout << "obj2.Min() = " << obj2.Min() << endl;
	cout << "obj3.Min() = " << obj3.Min() << endl;
	cout << "obj4.Min() = " << obj4.Min() << endl;
	cout << "obj5.Min() = " << obj5.Min() << endl;
	cout << "obj6.Min() = " << obj6.Min() << endl;

	return 0;
}