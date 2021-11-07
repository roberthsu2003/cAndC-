#include <iostream>
using namespace std;

int main() {
	int chinese;
	int math;
	int bonus=0;
	cout << "請輸入國文和數學的成績:(國文,數學):";
	scanf("%d,%d",&chinese,&math);
	//巢狀判斷
	if(chinese == 100 && math == 100){
		bonus = 1000;
	}else if(chinese == 100 || math == 100){
		bonus = 500;
	}

	cout << "獎金是" << bonus << endl;
} 
