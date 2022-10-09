#include <iostream>
#include <vector>

using namespace std;
int main() {
	vector<int> list(3);
	for(int &elem :list){
		elem = 10;
	}

	for(int elem:list){
		cout << elem << endl;
	}
}
