#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
	unsigned int seed = time(NULL);
	srand(seed);
	
	while(true){
		char ch = getchar();
		if(ch == 'E'){
			cout << "遊戲結束!" << endl;
			break;
		}else{
			int n = 1 + rand() % (6+1-1);
			cout << "您所擲的點數為:" << n << "點" << endl; 
		}

	}
	
	return 0;
}
