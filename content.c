#include <iostream>
using namespace std;

int main() {
	int num = 0;
	int inputNum;
	int sum = 0;
	while(true){
		
		cout << "請輸入第" << num + 1 << "個數值:";
		cin >> inputNum;
		if(inputNum < 0){
			break;
		}else if(inputNum % 2 == 1){
			num += 1;
			continue;
			
		}
		sum += inputNum;
		num += 1;
	}

	cout << "共加總" << num << "次,偶數加總的值是" << sum << endl;
} 
