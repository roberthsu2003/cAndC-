#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int studentsNum = 50; //學生人數
	int scoresNum = 5; //每個學生的分數
	int scores[studentsNum][scoresNum]; //建立所有學生分數的2維陣列

	for(int f=0;f < studentsNum; f++){
		cout << "第" << f+1 << "學生:";
		for(int l=0; l < scoresNum; l++){
			scores[f][l] = rand() % (100-60+1) + 60;
			cout << scores[f][l] << "   ";
		}
		cout << endl;
	}	
	
	
}
