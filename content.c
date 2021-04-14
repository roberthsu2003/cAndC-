//計算2 - 10所有偶數的總和
#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	for(int i=2; i<=1000; i+=2){
		sum += i;
		printf("第%d次迴圈的i=%d,總和為:%d\n",i/2,i,sum);
	}
}
