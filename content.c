#include <iostream>
using namespace std;

int main() {
	int score = 0;
	int sum = 0;
	int num = 0;
	while(true){
		cout << "請輸入第" << num+1 << "個數值:";
		cin >> score;
		if(score < 0){
			break;
		}
		
		num += 1;

		if(score % 2 == 1){
			continue;
		}
		sum += score;
		
	};
	cout << "所有正偶數的加總是:" << sum << endl;
}
