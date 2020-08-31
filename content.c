
//撰寫一個大樂透電腦自動選號程式，程式執行會以亂數的方式顯示1-49之間八個不重複的大樂透號碼。
#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int lot[49];
	int maxIndex = 48; //最大的索引
	int num = 8; //取出8個數
	int choose[8];
	for(int i=0;i<49;i++){
		lot[i] = i+1;
	}

	srand(time(NULL));
	for(int i=0; i<num ; i++){
		int randIndex = rand() % (maxIndex+1);
		choose[i] = lot[randIndex];
		lot[randIndex] = lot[maxIndex];
		maxIndex--;
	}

	cout << "本期大樂透電腦選號號碼如下:\n\n";
	for(int i=0; i<7; i++){
		cout << choose[i] << " ";
	}

	cout << "\n\n特別號" << choose[7] << "\n\n";

	
}
