#include <iostream>
using namespace std;

void showArray(int tempary[], int count){
	for(int i=0; i< count; i++){
		cout << "any[" << i << "]=" << tempary[i] << "\t";
	}
	cout << "\n\n";
}

int main() {
	int ary[] = {212, 328, 765, 986};
	int count = sizeof(ary) / sizeof(ary[0]);
	cout << "呼叫showArray\n";
	showArray(ary, count);
	return 0;
}
