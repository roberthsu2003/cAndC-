#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n[] = {1, 3, 5, 7, 9};
	int totalSize = sizeof(n);
	int oneSize = sizeof(n[0]);
	int counts = totalSize / oneSize;
	cout << "陣列的大小為:"
	 << totalSize
	 << ",一個元素的大小是" << oneSize << ",陣列的數量是:" << counts << endl;
	return 0;
}
