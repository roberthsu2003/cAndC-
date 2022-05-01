#include <iostream>

//國文100同時數學100,獎金1000
//國文100或者數學100,獎金500

using namespace std;
int main() {
	int chinese;
	int math;
	int bonus = 0;
	cout << "請輸入國文分數:";
	cin >> chinese;
	cout << "請輸入數學分數:";
	cin >> math;

	if(chinese == 100 && math == 100){
		bonus = 1000;
	}else if(chinese == 100 || math == 100){
		bonus = 500;
	}
	
	cout << "獎金是:" << bonus << endl;
}
