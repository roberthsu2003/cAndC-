#include <iostream>
using namespace std;

int main() {
	//建立陣列，同時給值
	int scores[3];
	//利用迴圈讀取陣列所有元素的值
	for(int i=0; i<3;i++){
		cout << "請輸入分數:";
		cin >> scores[i];
	}
	cout << "國文分數:" << scores[0] << endl;
	cout << "英文分數:" << scores[1] << endl;
	cout << "數文分數:" << scores[2] << endl;
}
