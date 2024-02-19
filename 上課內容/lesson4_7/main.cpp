#include <iostream>
using namespace std;
//國文100同時數學100,獎金1000
//國文100或者數學100,獎金500

int main() {
	int chinese, math, bonus=0;
	cout << "請輸入國文成績和數學成績(國文 數學):";
	cin >> chinese >> math;
	if(math==100 && chinese==100){
		bonus = 1000;
	}else if(math==100 || chinese==100){
		bonus = 500;
	}
	cout << "獎金是" << bonus << endl;
}
