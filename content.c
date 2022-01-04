#include <iostream>
using namespace std;

int main() {
	int scores[50][5];
	for(int i=0;i<50;i++){
		for(int j=0;j<5;j++){
			scores[i][j] = 0;
			cout << scores[i][j] << " ";
		}
		cout << endl;
	}


} 
