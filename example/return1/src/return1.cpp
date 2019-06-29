//============================================================================
// Name        : return1.cpp
//自鍵盤輸入一個數字n,顯示1...n。

#include <iostream>
using namespace std;

void showNum(int n){
	int i = 1;
	while(true){
		if (i > n){
			return;
		}
		cout << i << " ";
		i++;
	}

}

int main() {
	int inputNum;
	cout << "請輸入數字 n:";
	cin >> inputNum;
	showNum(inputNum);
	cout << endl;
	return 0;
}
