#include <iostream>
using namespace std;
//請計算1~某一個正整數內,所有偶數的的總和
int main() {
	int sum=0;
	int someone=0;
	cout << "請輸入某一正整數:";
	cin >> someone;
	
	for(int i=1;i <= someone; i++){
		if(i % 2 == 0){
			cout << i << " ";			
			sum += i;
		}		
	}
	cout << endl;
	cout << "1~" << someone <<"的偶數的總合是:" << sum << endl;
}
