#include <iostream>
using namespace std;

int main() {
	int score;
	int sum = 0;
	while(true){
		cout << "請輸入學生的成績:";
		cin >> score;
		if(score < 0){
			break;
		}else if(score > 100){
			cout << "超出範圍,請重新輸入\n";
			continue;
		}
		sum += score;
	}
	cout << "全班總成績為:" << sum << "分\n";
}
