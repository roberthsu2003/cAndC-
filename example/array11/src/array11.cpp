//============================================================================
// Name        : array11.cpp
//以陣列當作參數，觀查陣列傳遞變化

#include <iostream>
using namespace std;

void showArray(int tempary[], int count){

	for(int i=0; i<count; i++){
		cout << "any[" << i << "]=" << tempary[i] << " \t";
	}
	cout << "\n\n";
}


void sub2(int tempary[], int count){
	for(int i=0; i<count; i++){
		tempary[i] *= 2;
	}
}

int main() {
	int ary[] = {212, 328, 765, 986};
	int count = sizeof(ary)/ sizeof(ary[0]);
	cout << "呼叫showArray\n";
	showArray(ary, count);

	sub2(ary, count);

	showArray(ary, count);
	return 0;
}
