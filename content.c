#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
//指標變數
	const char* str1 = "one";
	char str2[] = "two";
	cout << "以陣列顯示str1字串" << endl;
	for(int i=0; i<3; i++){
		printf("str1[%d]=%c\n",i,str1[i]);	
	}

	cout << "以指標變數顯示str2字串" << endl;
	for(int i=0; i<3; i++){
		printf("*(str2 + %d)=%c\n",i,*(str2+i));
	}

	str1 = str2;

	cout << "以陣列顯示str2字串" << endl;
	for(int i=0; i<3; i++){
		printf("str1[%d]=%c\n",i,str1[i]);	
	}

	
}
