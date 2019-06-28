//============================================================================
// Name        : complex.cpp

//請使用者輸入一個任意數，程式會顯示此數的平方值及立方值
#include <iostream>
using namespace std;

int main() {
	float num,result;
	cout << "請輸入任意數:";
	cin >> num;
	result = num;
	result *= num;
	cout << "此數的平方是:" << result << "\n";
	result *= num;
	cout << "此數的立方是:" << result << "\n";
	return 0;
}
