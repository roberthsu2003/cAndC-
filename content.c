/*
// Name        : return1.cpp
//自鍵盤輸入一個數字n,顯示1...n。
//=============================

請輸入數字 n:10
1 2 3 4 5 6 7 8 9 10

===============================//
*/
#include <iostream>
using namespace std;
void showNum(int);

int main() {
	int inputNum;
	cout << "請輸入數字 n:";
	cin >> inputNum;
	showNum(inputNum);
	cout << endl;
	return 0;
}

void showNum(int n){
	int i = 1;
	while(true){
		if(i > n){
			return;
		}
		cout << i << " ";
		i++;
	}
}
