//============================================================================
// Name        : random2.cpp
//以亂數來模擬骰子遊戲，使用者按下E鍵後就會結束，按下任意鍵+enter，就會產生1到6的點數

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//使用c的getch(),必需引用<conio.h>標頭檔
//無法include conio.h
//#include <conio.h>
using namespace std;



int main() {
	unsigned int seed = (unsigned int)time(NULL);
	srand(seed);
	int n;
	while(true){
		cout << "請按任意鍵擲骰子,使用「E」結束遊戲:";
		//getchar要按return鍵
		char ch = getchar();
		if(ch == 'E'){
			cout << "擲骰子遊戲結束!" << endl;
			break;
		}else{
			//亂數1~6
			n = 1 + rand() % (6 - 1 + 1);
			cout << "您所擲的點數為:" << n << "點" << endl;
		}
	}




	return 0;
}
