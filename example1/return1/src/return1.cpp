//============================================================================
// Name        : return1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void showNum(int n){
	int i = 1;
	while(true){
		if(i > n){
			return;
		}
		cout << i << " ";
		i++;
	}
}
int main() {
	int m;
	do{
		cout << "請輸入數字 n:";
		cin >> m;
		showNum(m);
	} while(true);
	return 0;
}
