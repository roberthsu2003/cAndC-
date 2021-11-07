#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "請輸入數值:";
	cin >> num;
	int total=0;
	for(int i=1; i<=num; i++){
		total += i;
	}

	cout << "1~"<< num << "的加總是" << total << endl;
	
} 
