#include <iostream>
using namespace std;

int main() {
	int age;
	cout << "請輸入您的age:";
	cin >> age;
	//巢狀判斷
	if(age >= 30){
		if(age <= 50){
			cout << "壯年" << endl;
		}else{
			cout << "不是壯年" << endl;
		}	
	}else{
		cout << "不是壯年" << endl;
	}

	
}
