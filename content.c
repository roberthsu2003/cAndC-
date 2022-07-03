#include <iostream>
//計算固定中的支出，媽媽每天會將家裡的花費記錄下來，並且計算本週的花費總和
using namespace std;

int main() {
	int n, sum=0;
	for(int i=1; i<=7; i++){
		if(i == 7){
			cout << "請輸入星期日的支出:";
		}else{
			cout << "請輸入星期" << i << "的支出:";
		}
		
		cin >> n;
		sum += n;
	}
	cout << "本星期的支出為:" << sum << "元\n";
	
}
