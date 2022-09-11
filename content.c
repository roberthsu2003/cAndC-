#include <iostream>
#include <time.h>
using namespace std;

int get_number(){
	return random() % (100-1+1) + 1;
}

int main() {
	srandom(time(NULL));
	int nums;
	cout << "請輸入要排序的數值個數:";
	cin >> 	nums;
	int array[nums];
	cout << "排序前:" << endl;
	for(int i=0; i<nums; i++){
		array[i] = get_number();
		cout << array[i] << "\t";
	}
	cout << endl;
}
