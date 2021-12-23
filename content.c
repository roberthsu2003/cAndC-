#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srandom(time(NULL));
	//宣告陣列變數
	int count = 100;
	int scores[count];
	for(int i=0; i<count; i++){		 	
		scores[i] = random() % (100-50+1) + 50;
	}

	

	//取出元素值
	for(int i=0;i<count;i++){
		cout << "第" << i+1 << "個分數是:" << scores[i] << endl;
	}
} 
