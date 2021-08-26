#include <iostream>
using namespace std;
int main() {
	int scores[5]; //建立陣列
	cout << "請輸入5位學生的分數" << endl;
	//給每個元素元素值
	for(int i=0; i<5;i+=1){
		cout << "請輸入第" << i+1 << "學生的分數:";
		cin >> scores[i];
	}
	//輸出元素值
	for(int i=0; i<5; i+=1){
		cout << "第" << i+1 << "位學生的分數是:" << scores[i] << endl;
	}
	return 0;
}
