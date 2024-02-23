//請設計一個程式，讓使用者輸入數值，只有加總正偶數值，不加總正奇數值，如果輸入負數，結束程式。

#include <iostream>
using namespace std;
//請設計一個程式，讓使用者輸入數值，只有加總正偶數值，不加總正奇數值，如果輸入負數，結束程式
int main() {
	int a, sum = 0, num = 0;
	while(true){
		cout <<"請輸入第"<<num+1<<"個數值:";
		cin >> a;
		if(a < 0) break;
		else if(a%2 == 1){
				num += 1;
			continue;
		}
	sum += a;
	num += 1;
	}
	cout<<"所有輸入的正偶數的加總是:"<<sum<<endl;
}
