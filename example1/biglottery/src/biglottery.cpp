//============================================================================
// Name        : biglottery.cpp
//撰寫一個大樂透電腦自動選號程式，程式執行會以亂數的方式顯示1-49之間七個不重複的大樂透號碼。

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	int lot[49];
	int choose[7];
	int min = 1, max=49, num=7;
	int max_dim, choice;
	int i;
	max_dim = max-min+1;
	for(i=0; i<max_dim; i++){
		lot[i] = min + i;
	}
	srand(time(NULL));
	for(i=0; i<num; i++){
		choice=rand()%max_dim;
		choose[i] = lot[choice];
		lot[choice] = lot[max_dim-1];
		max_dim--;
	}

	cout << "本期大樂透電腦選號號碼如下:\n\n";
	for(i = 0; i < num; i++){
		cout << choose[i] << " ";
	}

	cout << "\n\n特別號:" << choose[6] << "\n\n";

	return 0;
}
