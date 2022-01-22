#include <iostream>
using namespace std;
int main() {
	int n[3] = {10, 20, 30};
	
	//陣列變數操作
	for(int i=0; i<3; i++){
		cout << n[0] << endl;
	}	
	cout << "===========" << endl;
	//指標變數操作
	for(int i=0; i<3; i++){
		cout << *(n+i) << endl; 
	}

} 
