#include <iostream>
using namespace std;
int main() {
	int scores[] = {72, 85, 92, 57, 42, 92, 76, 85, 54};
	cout << "陣列所有的記憶體:" << sizeof(scores) << endl;
	cout << "陣列內1個元素的大小:" << sizeof(scores[0]) << endl;
	//動態查詢陣列內元素的數量
	int count = sizeof(scores) / sizeof(scores[0]);
	cout << "陣列元素的數量為:" << count << endl;
}
