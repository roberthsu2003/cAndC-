#include <iostream>
using namespace std;

int main() {
	int score = 0;
	int sum = 0;
	int num = 0;
	while(true){
		cout << "請輸入第" << num+1 << "學生成績:";
		cin >> score;
		if(score < 0){
			break;
		}
		sum += score;
		num += 1;
	};
	cout << "全班總成績為:" << sum << ",平均分數為" << (float)sum/num << endl;
}
