//建立一個包含五個元素的整數陣列,使用sizeof計算陣列元素的個數,再使用for迴圈顯示陣列內容。

#include <iostream>
using namespace std;

int main() {
	int n[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
	int totalSize = sizeof(n);
	int oneSize = sizeof(n[0]);
	int counts = totalSize/oneSize;
	cout << "陣列大小為:" << totalSize << ",一個元素的大小是" << oneSize << ",陣列的數量是" << counts;
}
