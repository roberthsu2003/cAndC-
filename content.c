#include <iostream>
using namespace std;

void showArray(int tempary[], int count){
	for(int i=0; i<count; i++){
		cout << tempary[i] << " ";
	}
	cout << endl;
}

void sub2(int tempary[], int count){
	for(int i=0; i<count; i++){
		tempary[i] *= 2;
	}
}

int main() {
	int ary[] = {212, 328, 765, 986};
	showArray(ary, 4);

	sub2(ary, 4);

	showArray(ary, 4);
	return 0;
}
