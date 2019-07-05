//============================================================================
// Name        : sequential.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int num[] = {256, 731, 943, 389, 142, 645, 829, 945, 371, 418};
	string name[] = {"林小1","林小2","林小3","林小4","林小5","林小6","林小7","林小8","林小9","林小10"};

	for(;;){
		int n = sizeof(num) / sizeof(num[0]);
		int s,i;
		bool isFound = false;
		cout << "請輸入中獎者的編號:";
		cin >> s;
		for(i=0; i<n ; i++){
			if(num[i] == s){
				isFound=true;
				break;
			}
		}

		if(isFound == true){
			cout << "中獎者的姓名為:" << name[i];
			cout << "總共比對" << i+1 << "次\n\n";
			break;
		}else{
			cout << "無此中獎號碼!";
			cout << "總共比對" << i << "次\n\n";
		}


	}
	return 0;
}
