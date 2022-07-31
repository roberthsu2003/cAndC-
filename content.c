#include <iostream>

using namespace std;
void zero(int arr[], int length){
	for(int i=0; i<length; i++){
		arr[i] = 0;
	}
}

int main() {
	int scores[5] = {78, 95, 64, 30, 20};
	cout << "將所有分數變為0\n";
	
	zero(scores, 5);
	
	for(int i=0; i<5; i++){
		cout << scores[i] << "\t";
	}
	cout << endl;
	
}
