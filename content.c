#include <iostream>
using namespace std;

int main() {
	int sum=0;
	int count=0;
	for(int i=2;i<=10;i+=2){
		sum += i;
		count ++;
		printf("第%d次迴圈,i=%d,sum=%d\n",count,i,sum);
	}
	
} 
