#include <iostream>
using namespace std;

class Tools{
	public:
	int static add(int a, int b);

};

int Tools::add(int a, int b){
	return a + b;
}


int main() {
	int first;
	int second;

	cout << "請輸入第一個數值";
	cin >> first;

	cout << "請輸入第二個數值";
	cin >> second;

	cout << "2數相加是" << Tools::add(first, second) << endl;
	return 0;
}
