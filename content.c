#include <iostream>
using namespace std;

void showArray(int n[]){
	for(int i=0; i<3; i++){
		cout << n[i] << endl;
	}
}

int main() {
	int nums[3] ={111,222,333};
	cout << nums << endl;

	showArray(nums);
} 
