#include <iostream>
using namespace std;
//計算0 - 10所有偶數的總和
int main() {
	int sum = 0;
	for(int i=0; i<=10; i+=2){
		sum += i;
		cout << "執行第" << (i/2)+1 << "次";		
		cout << ",i=" << i ;
		cout << ", sum=" << sum << endl;
	}
}
