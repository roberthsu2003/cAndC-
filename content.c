#include <iostream>
using namespace std;

void showArray(int *n){
	for(int i=0; i<3; i++){
		n[i] *= 3;
	}
}

int main() {
	int nums[3] ={111,222,333};
	cout << nums << endl;

	showArray(nums);

	for(int i=0; i<3; i++){
		cout << nums[i] << endl;
	}
} 
