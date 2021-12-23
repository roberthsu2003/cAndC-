#include <iostream>
using namespace std;

float temperature(int fvalue){
	/*
	float cvalue = 1.8 * fvalue + 32;
	return cvalue;
	*/
	return 1.8 * fvalue + 32;
}

int main() {
	int fvalue;
	float result;
	char doagain;
	

	do{
		cout << "請輸入攝氏溫度:";
		cin >> fvalue;
		result = temperature(fvalue); //呼叫function
		cout << "華氏溫度=" << result << endl;
		
		cout << "請要繼續輸入嗎?(y or n))";
		cin >> doagain;
	}while(doagain == 'y');
	cout << "應用程式結束" << endl;
	return 0;
} 
