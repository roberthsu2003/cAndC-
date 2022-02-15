#include <iostream>
using namespace std;

int main() {
	int num;
	int result;
	cout << "請輸入任意數:";
	cin >> num;
	result = num;
	result *= num;
	cout << "此數的平方是:" << result << "\n";
	result *= num;
	cout << "此數的立方值是:" << result << endl;
	return 0;
}
