#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> list(3);
	list[0] = 5;
	list[1] = -3;
	list[2] = 12;

	for(int i=0; i<3; i++){
		cout << list[i] << endl;
	}
	cout << "=================" << endl;
	for (int elem :list){
		cout << elem << endl;
	}	
}
