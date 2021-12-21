#include <iostream>
using namespace std;

int main() {
	int score;
	int sum=0;
	int num = 0;
	
	while(true){		
		cout << "請輸入第" << num+1 << "位學生的成績:";
		cin >> score;
		if(score<0){
			break; //直接跳出迴圈
		}
		num += 1;
		sum += score;
	}

	cout << "學生人數是" << num << endl;
	cout << "全班總成績為:" << sum << endl;
	return 0;
} 
