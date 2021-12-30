#include <iostream>
using namespace std;

int main() {
	int num = 4;
	int scores[num];
	scores[0] = 87;
	scores[1] = 75;
	scores[2] = 90;
	scores[3] = 45;

	for(int i=0;i<num-1;i++){		
		for(int j=i+1;j<num;j++){
			cout << "i=" << i << "比對" << "j=" << j << endl;
			cout << scores[i] << "比對" << scores[j] << endl;
		}
		cout << "================\n";
	}	
} 
