#include <iostream>
using namespace std;

int main() {
	//計算元素的數量
	int n[] = {1, 3, 5, 7, 9};
	int nums = sizeof(n) / sizeof(n[0]);
	cout << nums << endl;	
}
