#include <iostream>
using namespace std;

typedef enum day{
	monday=1,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday,
	sunday
}day;

int main() {
	day today;
	cout << "請輸入今天是(星期1~日)(請輸入1~7)";	
	scanf("%d", &today);
	
	switch(today){
		case monday:
		cout << "今天星期一" << endl;
		break;

		case tuesday:
		cout << "今天星期二" << endl;
		break;

		case wednesday:
		cout << "今天星期三" << endl;
		break;

		case thursday:
		cout << "今天星期四" << endl;
		break;

		case friday:
		cout << "今天星期五" << endl;
		break;

		case saturday:
		cout << "今天星期六" << endl;
		break;

		case sunday:
		cout << "今天星期日" << endl;
		break;

		default:
		cout << "輸入錯誤" << endl;
		break;

	}

}
