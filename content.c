#include <iostream>
using namespace std;

int main() {
	char str1[] = "one";
	const char *str2 = "two";
	cout << "以陣列變數顯示str1字串" << endl;
	for(int i=0; i<3; i++){
		cout << "str1[" << i << "]" << str1[i] << endl;
	}

	
	cout << "以指標變數顯示str2字串" << endl;
	for(int i=0; i<3; i++){
		cout << "*(str2+" << i << ")" << *(str2 + i) << endl;
	}

	cout << "以指標變數顯示str1字串" << endl;
	for(int i=0; i<3; i++){
		cout << "*(str1+" << i << ")" << *(str1 + i) << endl;
	}

	cout << "以陣列變數顯示str2字串" << endl;
	for(int i=0; i<3; i++){
		cout << "str2[" << i << "]" << str2[i] << endl;
	}


	
}
