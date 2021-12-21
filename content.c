#include <iostream>
using namespace std;

int main() {
	int score;
	int sum=0;
	do{
		cout << "請輸入學生的成績:";
		cin >> score;
		if(score<0){
			break; //直接跳出迴圈
		}
		sum += score;
	}while(score >= 0);

	cout << "全班總成績為:" << sum << endl;
	return 0;
} 
