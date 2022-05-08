#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int studentNum = 10;
	int scoresNum = 8;
	int totols = studentNum * scoresNum;
	//50個學生每個學生5個分數
	int scores[totols]; //建立陣列
	//給值
	for(int i=0; i<totols; i++){
		scores[i] = rand() % (100-60+1) + 60;
	}

	//輸出值
	for(int i=0; i<studentNum; i++){
		cout << "第" << i+1 << "位學生  ";
		int sum = 0;
		for(int j=0;j<scoresNum;j++){
			cout << scores[i*scoresNum + j] << " ";
			sum += scores[i*scoresNum + j];
		}
		cout << "總分:" << sum << " ";
		cout << "平均:" << sum/(float)scoresNum;
		cout << "\n";
	}
}
