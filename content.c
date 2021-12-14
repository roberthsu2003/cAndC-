#include <iostream>
using namespace std;

int main() {
	int num, result;
	cout << "請輸入任意值:";
	cin >> num;
	result = num;
	result *= num;
	cout << "此數的平方是:" << result << endl;
	result *= num;
	cout << "此數的立方是:" << result << endl;
	return 0;
} 
