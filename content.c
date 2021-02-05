#include <iostream>
using namespace std;

void showAry(int*);
void sub2(int[]);

int main() {
	int ary[] = {1, 2, 3};
	cout << "以指標變數當參數:"  << endl;
	showAry(ary);
	cout << "以陣列變數當作參數:" << endl;
	sub2(ary);
	showAry(ary);
	return 0;
}

void showAry(int *tempAry){
	for(int i=0; i<3; i++){
		cout << "ary[" << i << "]=" << tempAry[i] << "\t";
	}

	cout << "\n---------------------------" << endl;
}

void sub2(int tempAry[]){
	for(int i=0; i<3; i++){
		*(tempAry+i) *= 2;
	}
}
