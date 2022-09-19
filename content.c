//請你以while迴圈方式為小美設計一個輸入成績的程式，如果輸入負數表示成績輸入結束，在輸入成績結束後顯示班上總成績及平均成績
#include <iostream>

using namespace std;
int main() {
	int value;	
  while(true){
		//break可以跳出迴圈
		cout << "請輸入一個數值:";
		cin >> value;
		if(value==-1){
			break;
		}
		cout << "輸入的值是:" << value << endl;
	}

	cout << "程式結束" << endl;
}
