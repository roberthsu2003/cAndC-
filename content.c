#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int studentNum = 50;
	int scoresNum = 5;
	int totols = studentNum * scoresNum;
	//50個學生每個學生5個分數
	int scores[totols]; //建立陣列
	//給值
	for(int i=0; i<totols; i++){
		scores[i] = rand() % (100-60+1) + 60;
	}

	//輸出值
	for(int i=0; i<<totols; i++){
		cout << scores[i] << endl;
	}
}
