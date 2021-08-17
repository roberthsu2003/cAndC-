#include <iostream>
using namespace std;
int main() {
	int score;
	int num = 0;
	int sum = 0;
	while(true){
		cout << "請輸入" << num+1 << "學生的成績:";
		cin >> score;
		if(score < 0){
			break;
		}
		//當不是負數時，執行的程式區段
		sum += score;
		num += 1;
	}

	cout << "全班總成績為:" << sum << "平均分數為" << (float)sum/num << endl;

}
