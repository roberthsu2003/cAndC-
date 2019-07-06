//============================================================================
// Name        : random2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

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
