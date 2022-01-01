#include <iostream>
using namespace std;

int main() {
	int chinese,math;
	int bouns;
	cout << "請輸入國文分數:";
	cin >> chinese;
	cout << "請輸入數學分數:";
	cin >> math;

	if(chinese == 100){
		if(math == 100){
			bouns = 1000;
		}else{
			bouns = 500;
		}

	}else{

		if(math == 100){
			bouns = 5000;
		}else{
			bouns = 0;
		}

	}

	cout << "獎金是:" << bouns << endl;


} 
