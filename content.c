#include <iostream>
using namespace std;
int main() {
	srand(time(NULL));
	int students[35][6];	
	for(int i=0; i<35; i++){
		for(int j=0;j<6;j++){
			students[i][j] = random() % (100-50+1) + 50;
			cout << students[i][j] << " ";
		}
		cout << endl;
	}
	
} 
