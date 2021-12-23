#include <iostream>
using namespace std;

int main() {
	//宣告陣列變數
	int count = 3;
	int scores[count];
	for(int i=0; i<count; i++){
		cout << "請輸入第"<< i+1 << "個分數:";
		cin >> scores[i];
	}

	

	//取出元素值
	for(int i=0;i<count;i++){
		cout << "第" << i+1 << "個分數是:" << scores[i] << endl;
	}
} 
