#include <iostream>
using namespace std;

int change_n(int value_n){ //宣告指標變數	
	return value_n + 10;
}

int main() {
	int n = 5;
	//n內容+10
	n = change_n(n);
	cout << "現在n的內容是:" << n << endl;
}
