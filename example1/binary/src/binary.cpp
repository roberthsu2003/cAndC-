//============================================================================
// Name        : binary.cpp
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
	int n = sizeof(num) / sizeof(num[0]);
	int s, i ,j , c, min, max, mid;
	bool isFound;
	int tempInt;
	string tempstr;
	for (i=0; i < n-1; i++){
		for(j = i+1; j<n; j++){
			if(num[i] > num[j]){
				tempInt = num[i];
				num[i] = num[j];
				num[j] = tempInt;

				tempstr = name[i];
				name[i] = name[j];
				name[j] = tempstr;

			}
		}
	}

	cout << "排序後的編號:\n";
	for(i = 0; i<n ; i++){
		cout << num[i] << " ";
	}
	return 0;
}
