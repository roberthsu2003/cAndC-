#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int dice();
int main() {
	unsigned int seed = (unsigned int)time(NULL);
	srand(seed);
	
	while(true){
		cout << "請按任意鍵擲骰子,使用E結束遊戲";
		char ch = getchar();
		if(ch == 'E'){
			cout << "擲骰子遊戲結束!" << endl;
			break;
		}else{
			for (int i=1; i<=4; i++){
				cout << "您第"<< i << "次所擲的點數為:" << dice() << "點" << endl;
			}
			
		}
		
		
	}
	return 0;
}

int dice(){
	int n;
	n = 1 + rand() % (6+1-1);
	return n;	
}
