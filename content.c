#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	unsigned int seed = (unsigned int)time(NULL);
	srand(seed);
	int n;
	while(true){
		cout << "請按任意鍵擲骰子,使用E結束遊戲";
		char ch = getchar();
		if(ch == 'E'){
			cout << "擲骰子遊戲結束!" << endl;
			break;
		}else{
			n = 1 + rand() % (6+1-1);
			cout << "您所擲的點數為:" << n << "點" << endl;
		}
		
		
	}
	return 0;
}
