#include <iostream>
using namespace std;

void showAry(int*);

int main() {
	int ary[] = {1, 2, 3};
	cout << "1指標變數當作參數:" << endl;
	showAry(ary);
}

void showAry(int *tempAry){
	for(int i=0; i<=2; i++){
		cout << "ary[" << i << "]=" << tempAry[i] << "\t";
	}
	cout << "\n----------------------------" << endl;
}
