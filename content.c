#include <iostream>
using namespace std;
int main() {
	const int nums = 4;
	int values[nums] = {43, 21, 54, 17};
	for(int i=0; i < nums-1; i++){
		for(int j=i+1; j < nums; j++){
			cout << "前面的值是:" << values[i] << ",後面的數值是:" << values[j] << endl;
		}
	}
}
