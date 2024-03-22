#include <iostream>
using namespace std;

void change_n(int* ptr_n){ //宣告指標變數
	cout << "在ptr_n內的值是:"<< ptr_n << endl; 
	cout << "在main function內的變數n的值是:" << *ptr_n << endl; //*是取值運算子
	*ptr_n = *ptr_n + 10;
}

int main() {
	int n = 5;
	//n內容+10
	cout << "n的記憶體位址:" << &n << endl;
	change_n(&n);
	cout << "現在n的內容是:" << n << endl;
}
