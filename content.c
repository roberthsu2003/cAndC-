#include <iostream>
using namespace std;

int main() {
	int end_value;	
	cout << "請輸入一個數值:";
	cin >> end_value;
	cout << "2~" << end_value << "的質數有:" << endl;
	for(int i=2;i<=end_value;i++){
		//取出要檢查的數值
		int check_value = i;
		bool is_prime = true;
		for(int j=2;j<check_value;j++){
			//檢查是否為值數
			if(check_value % j == 0){
				is_prime = false;
				break;
			}
		}
		if (is_prime){
			cout << check_value << "\t";
		}
		
	}
}
