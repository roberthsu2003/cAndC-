#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int nums;
	cout << "請輸入要排序的數值個數:";
	cin >> nums;
	cout << "排序前:" << endl;
	int array[nums];
	for (int i=0; i<nums; i++){
		array[i] = rand() % (999-1+1) + 1;
		cout << array[i] << " ";
	}
	cout << endl;
}
