#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
//使用2維陣列，儲存50個學生，每個學生5個分數
int main() {
	srandom(time(NULL));
	int scores[50][5];
	cout << "國文\t英文\t數學\t社會\t歷史\t總分\t平均" << endl;
	for(int i=0;i<50;i++){
		int sum = 0;

		for(int j=0;j<5;j++){
			scores[i][j] = random() % (100-60+1) + 60;
			sum += scores[i][j];
			cout << scores[i][j] << "\t\t";
		}

		cout << sum << "\t\t";
		cout << sum / 5 << "\t";
		cout << endl;
	}


} 
