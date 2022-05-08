#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srand(time(NULL));
	//1個學生的分數
	int scores[5]; //建立陣列
	//給值
	for(int i=0; i<5; i++){
		scores[i] = rand() % (100-60+1) + 60;
	}

	//輸出值
	for(int i=0; i<5; i++){
		cout << scores[i];
		if(i==4){
			cout << "\n";
		}else{
			cout << ",";
		}
	}
}
