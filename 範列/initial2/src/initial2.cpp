//============================================================================
// Name        : initial2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int score[2][3] = {{85, 82, 90},{76, 95, 89}};
	for(int i=0;i<2;i++){
		for(int j=0; j<3;j++){
			cout << "第" << i+1 << "位學生第" << j+1 << "科成績:" << score[i][j] << endl;
		}

		cout << "==========================================\n";
	}
	return 0;
}
