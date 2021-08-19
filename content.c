#include <iostream>
using namespace std;
int n;

void showNum(){
	int value = n*2;
	cout << "value的區域變數是" << value << endl;
}

int main() {
	cout << "請輸入全域變數n=";
	cin >> n;
	cout << "全域變數n是" << n << endl;
	showNum();
	return 0;
}
