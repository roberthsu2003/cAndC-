#include <iostream>
using namespace std;

int main() {
	//建立一個學生的分數
	//宣告的同時給值
	//由使用者手動輸入分數
	int num = 5;
	int scores[num];
	int sum = 0;	

	for(int i=0; i<num;i++){
		cout << "請輸入第" << i+1 << "學生的分數:";
		cin >> scores[i];		
	}	
	
	for(int i=0; i<num; i++){
		cout << scores[i] << endl;
		sum += scores[i];
	}

	cout << "學生總分是:" << sum << endl;
	cout << "學生平均分數是" << (float)sum / num << endl;
	
}
