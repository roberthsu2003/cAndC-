#include <iostream>
using namespace std;
int main() {
	int nums = 4;
	float array[nums];

	for(int i=0; i < 4; i++){
		cout << "請輸入第" << i+1 << "個數值:";
		cin >> array[i];
	}

	for(int i=0; i < 4; i++){
		cout << array[i] << endl;
	}

	
}
