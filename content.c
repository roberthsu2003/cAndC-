#include <iostream>
using namespace std;

int main() {
	int num;
	bool isPrimeNumber=true;
	cout << "請輸入一個數值:";
	cin >> num;

	for(int i=2;i < num; i++){
		if(num % i == 0){
			isPrimeNumber = false;
			break;
		}
	}

	if(isPrimeNumber){
		cout << "質數" << endl;
	}else{
		cout << "不是質數" << endl;
	}

}
