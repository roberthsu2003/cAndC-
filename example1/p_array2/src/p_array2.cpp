//============================================================================
// Name        : p_array2.cpp
// 定義一維字元陣列，分別以陣列與指標取陣列元素內容。


#include <iostream>
using namespace std;

int main() {
	char *str1 = "One";
	char str2[] = "Two";
	cout << "以陣列顯示str1字串" << endl;
	for(int i=0; i < 3; i++){
		cout << "str1[" << i << "]=" << str1[i] << endl;
	}

	cout << "以指標變數顯示str1字串" << endl;
	for(int i=0; i < 3; i++){
		cout << "(str2 + " << i << ")=" << *(str2+i) << endl;
	}
	return 0;
}
