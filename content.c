include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int num = 0;
	int score;
	do{
		
		cout << "請輸入第" << num+1 << "學生的成績:";
		cin >> score;
		if(score < 0){
			break;
		}

		sum += score;
		num += 1;
	}while(true);

	cout << "全班總成績為:" << sum << "平均分數為" << (float)sum/num;
}
