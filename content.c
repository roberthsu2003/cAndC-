#include <iostream>
using namespace std;

int main() {
	int age;
	cout << "請輸入您的age:";
	cin >> age;
	//使用邏輯判斷
	if(age>=20 && age<=50){
		cout << "壯年" << endl;
	}else{
		cout << "不是壯年" << endl;
	}
	
}
