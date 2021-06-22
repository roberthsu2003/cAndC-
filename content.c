#include <iostream>
using namespace std;

int main() {
	int inputNum;

	do{
		cout << "請輸入數值:";
		cin >> inputNum;
		if(inputNum < 0){
			break;
		}

	}while(true);
}
