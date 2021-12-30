#include <iostream>
using namespace std;

int main() {
	int scores[3];
	scores[0] = 87;
	scores[1] = 75;
	scores[2] = 90;

	//c++的輸出語法
	cout << scores[0] << "," << scores[1] << "," << scores[2] << endl;

	
	//c的輸出語法
	printf("%d,%d,%d\n",scores[0],scores[1],scores[2]);
 } 
