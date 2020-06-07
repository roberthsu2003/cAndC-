#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int add(int a, int b){
	return a + b;
}

string add(string a, string b){
	return a + b;
}

int main() {
	printf("add(2,3)=%d\n",add(2,3));
	printf("===============================\n");
	cout << "add(\"Nice\", \"Play\") = " << add("Nice", "Play") << endl;
	return 0;
;
}
