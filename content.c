#include <iostream>
using namespace std;

int main() {
	int score=0;
	int num = 0; //學生數
	int sum = 0; //總分
	while(true){
		cout << "請輸入第" << num+1 <<"學生的成績:";
		cin >> score;
		if(score<0) break;
		sum += score;
		num += 1;
	}
	//cout << "全班總成績為:" << sum << "平均分數為" << (float)sum / num;

	printf("全班總成績為:%d,平均分數為%.2f",sum,(float)sum / num);
	return 0;

}
